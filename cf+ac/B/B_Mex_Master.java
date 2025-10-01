
import java.util.*;

public class B_Mex_Master {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t > 0) {
            int n = in.nextInt();
            int n0 = 0, n1 = 0, no = 0;
            LinkedList<Integer> x = new LinkedList<>();
            for (int i = 0; i < n; i++) {
                int a = in.nextInt();
                x.add(a);
                if (a == 0) {
                    n0++;
                } else if (a == 1) {
                    n1++;
                } else {
                    no++;
                }
            }
            int res = 0;

            if (no == 0 && n0 != 0 && n1 != 0) {
                if (n1 - n0 >= 1 || n0 - n1 == 1) {
                    res = 0;
                } else {
                    res = 2;
                }
            } else if (n0 == 0 && n1 != 0 && no != 0) {
                res = 0;
            } else if (n1 == 0 && n0 != 0 && no != 0) {
                if (no - n0 >= 1 || n0 - no == 1) {
                    res = 0;
                } else {
                    res = 1;
                }
            } else if (n0 == 0 && n1 == 0) {
                res = 0;
            } else if (n0 == 0 && n0 == 0) {
                res = 0;
            } else if (n1 == 0 && no == 0) {
                res = 1;
            } else {
                int n2 = n1 + no;
                if (n2 - n0 >= 1 || n0 - n2 == 1) {
                    res = 0;
                } else {
                    res = 1;
                }
            }

            System.out.println(res);
            t--;
        }

        in.close();
    }
}
