import java.util.*;
import java.lang.*;
public class swapp {
     public static void main(String aa[]){
     int a,b,temp;
     Scanner s=new Scanner(System.in);
     a=s.nextInt();
     b=s.nextInt();
     temp=a;
     a=b;
     b=temp;
     System.out.printf("%d %d",a,b);
    }
}
