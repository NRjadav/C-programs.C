#include<stdio.h>

int nil(float name[3])
{
	int i;
	
	for(i=0;i<3;i++)
	{
		scanf("%f",&name[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%f",name[i]);
	}
	
}

int main()
{
	float name[3];
	
	nil(name);
}
