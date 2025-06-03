import java.util.*;

public class A_Koxia_and_Whiteboards {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int index = 0; index < t; index++) {
            LinkedList<Integer> x = new LinkedList<>();
            LinkedList<Integer> y = new LinkedList<>();
            int n = in.nextInt();
            int m = in.nextInt();
            for (int i = 0; i < n; i++) {
                int a = in.nextInt();
                x.add(a);
            }
            Collections.sort(x);
            for (int i = 0; i < m; i++) {
                int a = in.nextInt();
                y.add(a);
            }
            Collections.sort(y, Collections.reverseOrder());
            m = Math.min(m, n);
            for (int i = 0; i < m; i++) {
                x.remove(0);
                x.add(y.get(i));
            }
            long sum = 0;
            for (int i = 0; i < n; i++) {
                sum = sum + x.get(i);
            }
            System.out.println(sum);

        }

        in.close();
    }
}