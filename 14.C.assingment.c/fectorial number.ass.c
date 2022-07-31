#include<stdio.h>
int main()
{
	int n,f,f1=1;
	
	printf("enter eny numbers:");
	scanf("%d",&n);
	
	for(f=1;f<=n;f++)//1<4  2<4  3<4    4<=4
	{
		f1=f1*f;//1=1*1=1  1=1*2=2    2=2*3=6   6=6*4=24
		
	}
	
	printf("%d %d",n,f1);
	
}
