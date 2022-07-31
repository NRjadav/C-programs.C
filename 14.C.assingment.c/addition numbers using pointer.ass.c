#include<stdio.h>
int main()
{  
     int *n,*m,a,b,sum;
	 printf("enter two numbers:");
	 scanf("%d %d",&a,&b);
	 
	 n=&a;
	 m=&b;
	 sum=*n+*m;	
	 printf("sum of numbers:%d",sum);
	
	
	
}
