#include<stdio.h>
int main()
{
	
	
	FILE *file1;
	int age=100;
	printf("enter your age:");
	scanf("%d",&age);
	
	file1=fopen("C:\\Users\\shree\\nilesh12345.txt","w");
	
	file1=fopen("C:\\Users\\shree\\nilesh12345.txt","a");
	
    fprintf(file1,"%d",age);
	
	fclose(file1);	
	
	file1=fopen("C:\\Users\\shree\\nilesh12345.txt","r");
	
	fscanf(file1,"%d",&age);
	printf("%d",age);
	
	
	
	
	
	
}
