#include<stdio.h>
int main()
{
	
	int n=5252,rem,reverse_number=0;
	int num=n;
	while(n!=0)
	{
		
		rem=n%10;
		reverse_number=rem+reverse_number*10;
		n=n/10;}
	//	printf("%d",reverse_number);
		
		if(num==reverse_number)
		{
			printf("num pelindreme......!");
			
		}
		
		else
		{
			printf("not....!");
		}
		
		
	
	
	
	
	
	
	
}
