import java.util.*;

public class A_Anton_and_Danik {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String x = in.next();
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (x.charAt(i) == 'A')
                c++;
            else
                c--;
        }
        if (c > 0)
            System.out.println("Anton");
        else if (c < 0)
            System.out.println("Danik");
        else
            System.out.println("Friendship");
        in.close();
    }
}
