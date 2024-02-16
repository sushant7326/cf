import java.util.Scanner;
public class ChatRoom {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String s = in.next();
        s = s.toLowerCase();
        byte result = 0;
        int x = s.indexOf("h");
        if(x!=-1){
            x = s.indexOf("e",x+1);
            if(x!=-1){
                x = s.indexOf("l",x+1);
                if(x!=-1){
                    x = s.indexOf("l",x+1);
                    if(x!=-1){
                        x = s.indexOf("o",x+1);
                        if(x!=-1){
                            result=1;
                        }
                    }
                }
            }
        }
        System.out.println(result==1?"YES":"NO");
        in.close();
    }    
}
