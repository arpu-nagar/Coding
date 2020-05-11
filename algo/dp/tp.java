import java.util.Scanner;

//Class name has to be Main.
public class tp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.nextLine();
        char a[] = x.toCharArray();
        int f = -1;
        int xc = 0;
        int yc = 0;
        int c = 0;
        for (int i = 0; i < x.length(); i++) {
            if (a[i] == '.') {
                c++;
            }
            if (a[i] == 'X') {
                xc++;
                 if (f == 0)
                    xc = xc + c;
                c = 0; 
                f = 0;
            }

            if (a[i] == 'Y') {
                yc++;
                if (f == 1)
                    yc = yc + c;

                c = 0;
                f = 1;
            }
        }
        System.out.println(xc + " " + yc);
    }
}