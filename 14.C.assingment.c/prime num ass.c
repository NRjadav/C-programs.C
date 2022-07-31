#include<stdio.h>
int main(){
	
	int i, n,j=0;
	printf("enter number:");
	scanf("%d",&n);
	
	for( i=1;i<=n;i++)
	
	{
		if(n%i==0)
		{
			j++;
		}
		
		
		
	}
	
	if(j==2){
		printf("prime num");
	}
	
	else{
		printf("not prime num");
	}
	
	
	
	
	
	
}
