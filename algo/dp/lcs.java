import java.util.*;

public class lcs {
    
    static int lcsrec(char s1[],char s2[],int len1,int len2){
        if(len1== s1.length || len2 == s2.length){
            return 0;
        }
        if(s1[len1] == s2[len2]){
            return 1+ lcsrec(s1,s2,len1+1,len2+1);
        }
        else{
            return Math.max(lcsrec(s1,s2,len1+1,len2),lcsrec(s1,s2,len1,len2+1));
        }
    }

    static int solve(String a, String b) {
        char s1[] = a.toCharArray();
        char s2[] = b.toCharArray();
        int max = 0;
        int temp[][] = new int[s1.length +1][s2.length+1];

        for(int i=1;i<temp.length;i++)
        {
            for(int j=1;j<temp[i].length;j++)
            {
                if(s1[i-1] == s2[j-1]){
                    temp[i][j] = temp[i-1][j-1]+1;
                }
                else{
                    temp[i][j] = Math.max(temp[i][j-1],temp[i-1][j]);
                }

                if(temp[i][j] > max){
                    max = temp[i][j];
                }
            }
        }
        return temp[s1.length][s2.length];
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        sc.nextLine();
        String s2 = sc.next();
        sc.nextLine();

        System.out.println(solve(s1, s2));
        System.out.println(lcsrec(s1.toCharArray(),s2.toCharArray(),0,0));
        sc.close();
    }
}