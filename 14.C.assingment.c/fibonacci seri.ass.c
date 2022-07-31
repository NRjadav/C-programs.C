#include<stdio.h>
int main(){
	
	int n1=0,n2=1,n3,i;
	printf("%d\n%d\n",n1,n2);
	
	for( i=2;i<10;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
		printf("%d",n3);
		
		
		printf("\n");
	}
	
	
	return 0;
	
	
}
