import java.util.*;

public class B1772{
    static boolean check(LinkedList<Integer> a){
        if((a.get(0)<a.get(1)) && (a.get(2)<a.get(3)) && (a.get(0)<a.get(2)) && (a.get(1)<a.get(3))){
            return true;
        }
        else{
            return false;
        }
    }

    static LinkedList<Integer> rotate(LinkedList<Integer> a){
        LinkedList<Integer> b = new LinkedList<>();
        b.add(a.get(2));
        b.add(a.get(0));
        b.add(a.get(3));
        b.add(a.get(1));
        return b;

    }

    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int index=0; index<t; index++){
            LinkedList<Integer> x = new LinkedList<>();
            LinkedList<Integer> y = new LinkedList<>();
            int a;
            for(int i = 0; i< 4; i++){
                a = in.nextInt();
                x.add(a);
            }
            byte flag=0;
            Loop1:
            for(int i=1; i<=4; i++){
                if(check(x)){
                    System.out.println("YES");
                    flag=1;
                    break Loop1;
                }
                else{
                    y=rotate(x);
                    x.clear();
                    x.addAll(y);
                    y.clear();
                }
            }
            if(flag==0){
                System.out.println(("NO"));
            }
        }


        in.close();
    }
}