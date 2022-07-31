#include<stdio.h>
int nil(int n)
{    
    int i;
    
    if(n<=10)
    {
	
       for(i=1;i<=10;i++)
       {
       	  printf("%d * %d = %d\n",n,i,n*i);
	   }
	   printf("\n");
	   nil(n+1);
	   }
	   
	   
}

int main()
{
	nil(1);
	
}
