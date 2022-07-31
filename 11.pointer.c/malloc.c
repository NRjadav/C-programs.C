#include<Stdio.h>
int main()
{
	
	int ptr;
	
	ptr=(int*) calloc(100,sizeof(int));
	
	if(ptr==NULL)
	{
		printf("memory not allocated....!");
	}
	
	else
	{
		printf("memory allocated...!");
	}
	
	
	
	
	
	
	
	
}

