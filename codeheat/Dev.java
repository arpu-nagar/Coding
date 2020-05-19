import java.util.*;

public class Dev{
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int n  =sc.nextInt();
        int q = sc.nextInt();
        int arr[] = new int[n];
        while(true){
            if(sc.hasNextInt()){
                int p = sc.nextInt();
                arr[p-1]++;
            }
            else
            break;
        }
        for(int i=0;i<n;i++)
        System.out.println(arr[i]);
    }
}