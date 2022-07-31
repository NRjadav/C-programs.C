#include<stdio.h>
int main()
{
	
	int arr[20]={10,20,30,40,50,60,70,80,90,100,110};
	int i,j,temp;
	
	
	
	for(i=0;i<11;i++)
	{
		  for(j=i+1;j<11;j++)
		  {
		  	   
		  	    if(arr[i]>arr[j])
		  	    {
                     temp=arr[i];
					 arr[i]=arr[j];
					 arr[j]=temp;  		  	    	
				}
		  	
		  }
		
		
	}
	
	for(i=0;i<11;i++)
	{
		printf("%d",arr[i]);
	}
	
	
	
	
	
}
