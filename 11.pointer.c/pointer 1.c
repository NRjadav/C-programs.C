#include<stdio.h>
int main()
{
	
	int a=102,*p,**q;
	p=&a;
	q=&p;
	printf("%d\n",p);
	printf("%d\n",*p);
	
	printf("%d\n",q);
	printf("%d\n",**q);
	
	
	
	
	
	
	
}
