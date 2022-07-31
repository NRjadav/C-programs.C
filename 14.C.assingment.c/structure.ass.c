#include<stdio.h>
#include<string.h>


struct person
{
	int no;
	char name[50];
	char address[50];
	int age;
	
	
	
};

int main()
{
	struct person nm[5];
	int i;
	for(i=0;i<5;i++)
	{
        printf("enter no:");
		scanf("%d",&nm[i].no);
	
		
		printf("enter name:");
		scanf("%s",&nm[i].name);
		
		printf("enter age:");
		scanf("%d",&nm[i].age);
	
	
	    printf("enter address:");
		scanf("%s",&nm[i].address);
	}
	
	for(i=0;i<5;i++)
	{
		printf("employee no:%d\n",nm[i].no);
		printf("employee name:%s\n",nm[i].name);
		printf("employee age:%d\n",nm[i].age);
		printf("employee address:%s\n",nm[i].address);
		
		
		
		
		
	}
	
		

}






