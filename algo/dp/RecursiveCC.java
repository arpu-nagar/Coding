// Coin change using recursion in my fav lamguage <3

import java.util.*;

public class RecursiveCC {

    static int count(int arr[], int n, int value) {
        if (value == 0)
            return 1;

        if (value < 0)
            return 0;

        if (n <= 0 && value >= 1)
            return 0;

        return count(arr, n - 1, value) + count(arr, n, value - arr[n - 1]);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of coins followed by them.");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.println("Enter the value");
        int value = sc.nextInt();
        int ans = count(arr, arr.length, value);
        System.out.println("The number of ways is: " + ans);
        sc.close();
    }
}