import java.util.*;
public class sumpalindrome {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int i,r,x=0;
	
	while(n>0)
		{
		    r=num%10;
		    x+=r;
		    num=num/10;
		    
		}
		
	    String s=Integer.toString(x);
	    
	    char c[]=s.toCharArray();
	    String p="";
	     for(i=(c.length-1);i>=0;i--)
	    {
	       p+=c[i];
	    }
	   
	    if(s.equals(p))
	    {
	        System.out.println("YES");
	    }
	    else{
	         System.out.println("NO");
	    }}}
