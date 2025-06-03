import java.util.*;

public class A_Musical_Puzzle {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t > 0) {
            int n = in.nextInt();
            Set<String> x = new HashSet<>();
            String a = in.next();
            for (int i = 0; i < n - 1; i++) {
                x.add(a.substring(i, i + 2));
            }
            System.out.println(x.size());
            t--;
        }
        in.close();
    }
}