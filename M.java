import java.util.*;
public class M {
    static LinkedList<Integer> find(LinkedList<Integer> x, int n){
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int a = x.get(j)-x.get(i);  
                if(!x.contains(a)){
                    x.add(a);
                    Collections.sort(x);
                    n = x.size();
                    return (find(x,n));
                }
                else{
                    continue;
                }
            }
        }
        return x;
            

    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int index = 0; index < t; index++){
            int n = in.nextInt();
            LinkedList<Integer> x = new LinkedList<Integer>();
            for(int i = 0; i < n; i++){
                int y = in.nextInt();
                x.add(y);
            }
            // for(int i=0; i<n; i++){
            //     for(int j=i+1; j<n;){
            //         int a = x.get(j)-x.get(i);
            //         if ((x.contains(a))){j++;}  
            //         else{x.add(a);}
            //         Collections.sort(x);
            //         n = x.size();
            //     }
            // }

            System.out.println(find(x,n).size());
        }
        in.close();
    }
}
