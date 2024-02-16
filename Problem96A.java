import java.util.Scanner;

public class Problem96A{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String x = in.next();
        System.out.println((x.contains("0000000") || x.contains("1111111"))?"YES":"NO");
        in.close();
    }
}