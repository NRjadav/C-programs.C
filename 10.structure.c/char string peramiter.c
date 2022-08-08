#include<stdio.h>
#include<string.h>

struct nilesh
{
	char n[10];
};

int nil(struct nilesh N)
{
	printf("%s",N.n);
}

int main()
{
	struct nilesh N;
	
	scanf("%s",&N.n);
	
	nil(N);
	
}
