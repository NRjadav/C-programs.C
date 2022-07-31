#include<stdio.h>
int main()
{
	
	
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int n,max=arr[0];
	
	for(n=0;n<10;n++)
	{
	
         if(arr[n]>max)
         {
         	max=arr[n];
		 }
    
    }
	
	
	printf("%d",max);
	
	
	
	
	
	
}
