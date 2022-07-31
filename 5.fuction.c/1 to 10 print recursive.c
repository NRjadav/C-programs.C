#include<stdio.h>
void nil(int n)
{
	if(n<=10)
	{
		printf("%d",n);
		nil(n+1);
	}
}

int main()
{
	int n=1;
	nil(n);
}
