import java.util.*;
class rev{
     
     public static void main(String aa[]){
         int m;
         Scanner s=new Scanner(System.in);
         String x=s.nextLine();
         int y=x.length();
         int p=0;
         for(int ij=y;i>=0;i--){
             String ll=x.substring(p,i);
             String o=new StringBuffer(ll).reverse().toString();
             if(!o.equals(ll)){
                 System.out.println(ll);
                 break;
                 
             }
         }
     }
}
