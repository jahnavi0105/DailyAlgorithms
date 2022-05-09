import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int x=sc.nextInt();
	int c=0;
	int arr[]=new int[n];
	for(int i=0;i<n;i++)
	 arr[i]=sc.nextInt();
	Arrays.sort(arr);
	int i=0,j=n-1;
	while(i<j){
	    if(arr[i]+arr[j]==x){
	      c=1;
	      break;
	    }
	    else if(arr[i]+arr[j]>x)
	      j--;
	    else 
	      i++;
	}
	if(c==1)
	  System.out.println("found");
	else 
	  System.out.println("not found");

	}
}
