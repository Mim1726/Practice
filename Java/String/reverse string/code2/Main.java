import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        StringBuilder sb=new StringBuilder(s);
        sb.reverse();
        System.out.println(sb.toString());
        sc.close();
    }
}
