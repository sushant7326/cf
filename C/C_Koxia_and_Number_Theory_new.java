import java.util.*;
public class C_Koxia_and_Number_Theory_new {

    static boolean check(int a, int b){
        int c = Math.min(a,b);
        for(int i=2; i<=c; i++){
            if(a%i==0 && b%i==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        Loop1:
        for(int index=0; index<t; index++){
            int n = in.nextInt();
            int cO=0, cE=0;
            LinkedList<Integer> x = new LinkedList<>();
            for(int i=0; i<n; i++){
                int a = in.nextInt();
                x.add(a);
                if(a%2==0){
                    cE++;
                }
                else{
                    cO++;
                }
            }
            if(cO>1 && cE>1){
                System.out.println("NO");
                continue Loop1;
            }
            Set<Integer> y = new HashSet<Integer>();
            y.addAll(x);
            if(y.size()!=n){
                System.out.println("NO");
                continue Loop1;
            }
            else{
                System.out.println("YES");
                
            }
            
        }
        in.close();
    }
        
}