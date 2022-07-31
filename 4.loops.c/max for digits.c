#include<stdio.h>
int main()
{
	
	int n=12345,sum=0,rem=0;
	
	while(n!=0)
	{
		rem=n%10;
		if(sum<=rem)
		{
			
			sum=rem;
		}
		
		n=n/10;
		
	}
	
	
	printf("%d",sum);
	
	
	
	
	
}
