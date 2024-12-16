import java.util.*;
public class Main{
    public static void main(String[] args){
        //reverse string
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        sc.nextLine();

        while(t-->0){

            String s=sc.nextLine();
            StringBuilder sb=new StringBuilder(s);
            sb.reverse();

            for(int i=0;i<sb.length();i++){
                char c=sb.charAt(i);
                if(c=='p'){
                    sb.setCharAt(i,'q');
                }
                else if(c=='q'){
                    sb.setCharAt(i,'p');
                }
            }
            System.out.println(sb.toString());
        }
        sc.close();
    }
}
