import java.util.*;
public class Main 
{
	public static void main(String[] args)
	{
		int num,sum=0,i,max,j,k;
		Scanner scan=new Scanner(System.in);
		num=scan.nextInt();
		int a[]=new int[num];
		for(i=0;i<num;i++)
		{
			a[i]=scan.nextInt();
		}
	    max=a[0];
		for(i=0;i<num;i++)
		{	 
		  sum=0;
		  sum=a[i];
		  for(j=i+1;j<num;j++)
		  {
			sum=sum+a[j];
			
			if(sum>max)
			   max=sum;
		  }
		}
		System.out.print(max);
	}
}
