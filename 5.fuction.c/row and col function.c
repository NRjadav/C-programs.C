#include<stdio.h>
int getvelue(int x){
	
	int row,col;
	
	printf("%d\n",x);
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5;col++)
		{ 
		      printf("* ");
		    
		}
		
		
		printf("\n");
		
	}
	
}
	
int main(){
	
	int n;
	printf("enter any intiger number:\n");
	scanf("%d",&n);

	getvelue(n);	
	getvelue(n);
	getvelue(n);
	
	return 0;
	
	
	
	
}	
	
	
	
	

