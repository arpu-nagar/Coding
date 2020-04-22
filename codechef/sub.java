
import java.io.*;
import java.util.InputMismatchException;

public class Main {
    static class Print
    {
        private final OutputStream out;
        /*public Print(OutputStream outputStream)
        {
            writer=new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
        }*/
        public Print()
        {
            this.out=System.out;
        }
        public void print(String str)throws IOException
        {
            //buf=str.getBytes();
            for (int i = 0; i < str.length(); i++)
            {
			/*if (i != 0)
			out.write(' ');*/
                out.write(str.charAt(i));
            }
        }
        public void printLine(String str)throws IOException
        {
            print(str);
            out.write('\n');
        }
        public void close()throws IOException
        {
            out.close();
        }
    }
    static class Scan
    {
        private byte[] buf=new byte[1024];
        private int index;
        private InputStream in;
        private int total;
        public Scan()
        {
            in=System.in;
        }
        public int scan()throws IOException
        {
            if(total<0)
                throw new InputMismatchException();
            if(index>=total)
            {
                index=0;
                total=in.read(buf);
                if(total<=0)
                    return -1;
            }
            return buf[index++];
        }
        public int scanInt()throws IOException
        {
            int integer=0;
            int n=scan();
            while(isWhiteSpace(n))
                n=scan();
            int neg=1;
            if(n=='-')
            {
                neg=-1;
                n=scan();
            }
            while(!isWhiteSpace(n))
            {
                if(n>='0'&&n<='9')
                {
                    integer*=10;
                    integer+=n-'0';
                    n=scan();
                }
                else throw new InputMismatchException();
            }
            return neg*integer;
        }
        public double scanDouble()throws IOException
        {
            double doub=0;
            int n=scan();
            while(isWhiteSpace(n))
                n=scan();
            int neg=1;
            if(n=='-')
            {
                neg=-1;
                n=scan();
            }
            while(!isWhiteSpace(n)&&n!='.')
            {
                if(n>='0'&&n<='9')
                {
                    doub*=10;
                    doub+=n-'0';
                    n=scan();
                }
                else throw new InputMismatchException();
            }
            if(n=='.')
            {
                n=scan();
                double temp=1;
                while(!isWhiteSpace(n))
                {
                    if(n>='0'&&n<='9')
                    {
                        temp/=10;
                        doub+=(n-'0')*temp;
                        n=scan();
                    }
                    else throw new InputMismatchException();
                }
            }
            return doub*neg;
        }
        public String scanString()throws IOException
        {
            StringBuilder sb=new StringBuilder();
            int n=scan();
            while(isWhiteSpace(n))
                n=scan();
            while(!isWhiteSpace(n))
            {
                sb.append((char)n);
                n=scan();
            }
            return sb.toString();
        }
        private boolean isWhiteSpace(int n)
        {
            if(n==' '||n=='\n'||n=='\r'||n=='\t'||n==-1)
                return true;
            return false;
        }
    }
    public static void main(String[] args) throws IOException
    {
        Scan scn = new Scan();
        Print print=new Print();
        BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
        int t=scn.scanInt();
       while(t-->0){
           int l=scn.scanInt();
           long[] arr=new long[l];
           for(int i=0;i<l;i++){
               arr[i]=scn.scanInt();
           }
           long n=0l;
           n=(long)l;
           for(int i=0;i<n;i++){
               if(arr[i]%4==0){
                   arr[i]=4;
               }
               else if(arr[i]%2==0){
                   arr[i]=2;
               }
           }
           long count=0;
           int i1=0;
           long n1=0l;
           int i2=0;
           if(arr[0]==2){
               n1=0;
               i1=0;
           }
          else if(arr[0]==4){
               n1=0;
               i1=0;
               count+=n;
           }
           else{
               int p=0;
               while(p!=n && arr[p]!=2 && arr[p]!=4){
                   p++;
               }

               i1=p;
               n1=p;
               if(p!=n && arr[p]==4){
                   count+=(n-p)*(p+1);
               }
           }
           count+=((long)n1*(n1+1))/2;
           if(i1!=n && arr[i1]==4) {
               n1 = 0;
           }
           for(int i=i1+1;i<n;){
               i2=i;
//               System.out.println(count);
               while(i2<n && arr[i2]!=2 && arr[i2]!=4){
                   i2++;
               }
               if(i2==n){
                   break;
               }
               count+=((long)(i2-i1-1)*(i2-i1))/2;
               if(arr[i1]==2 && arr[i2]==2){
                   if(n1!=0)
                   count+=(n-i2)*(1+n1);
                   else count+=(n-i2);
                   n1=i2-i1-1;
               }
               else if(arr[i1]==2 && arr[i2]==4){
                   if(n1==0 && (i2-i1-1)==0)
                   count+=(n-i2)*2;
                   else if(n1==0 && (i2-i1-1)!=0)
                       count+=(n-i2)*(2+(i2-i1-1));
                   else if(n1!=0 && (i2-i1-1)!=0)
                       count+=(n-i2)*(2+n1+(i2-i1-1));
                   else count+=(n-i2)*(2+n1);
                   n1=0;
               }
               else if(arr[i1]==4 && arr[i2]==4){
                   if(i2-i1-1!=0)
                   count+=(n-i2)*(1+i2-i1-1);
                   else count+=n-i2;
                   n1=0;

               }
               else if(arr[i1]==4 && arr[i2]==2)
                   n1=i2-i1-1;
               i1=i2;
               i=i1+1;
           }
           count+=((long)(n-i1-1)*(n-i1))/2;
           bw.append(count+"\n");
       }
        bw.close();
    }
}