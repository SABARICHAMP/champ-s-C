import java.util.*;
class wordrev{
     
     public static void main(String aa[]){
         int num;
         Scanner s=new Scanner(System.in);
         String x=s.nextLine();
         int y=x.length();
         int p=0;
         for(int i=y;i>=0;i--){
             String ll=x.substring(p,i);
             String o=new StringBuffer(ll).reverse().toString();
             if(!o.equals(ll)){
                 System.out.println(ll);
                 break;
                 
             }
         }
     }
}
