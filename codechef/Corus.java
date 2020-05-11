import java.util.*;

/*
JAVA is gay
*/


public class Corus {
    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n, q; n =  q = 0;
        if (sc.hasNextInt())
            n = sc.nextInt();
        if (sc.hasNextInt())
            q = sc.nextInt();
        String s = "";
        if (sc.hasNextLine())
            s = sc.nextLine();
        int arr[] = new int[26];

        for(int i=0;i<n;i++)
        {
            arr[(int)s.charAt(i) - 97]++;
        }
        for(int i=0;i<q;i++)
        {
            long sum = 0; int c = 0;
            if (sc.hasNextInt())
            c = sc.nextInt();

            for(int j=0;j<26;j++)
            {
                if(arr[j] - c > 0)
                sum = sum + (arr[j] - c);
            }
            System.out.println(sum);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t; t = 0;
        if (sc.hasNextInt())
            t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }

    }
}