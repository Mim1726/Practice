import java.util.*;
public class Main{
    public static void main(String[] args){
        //reverse string
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String r=new StringBuilder(s).reverse().toString();
        System.out.println(r);
        sc.close();
    }
}
