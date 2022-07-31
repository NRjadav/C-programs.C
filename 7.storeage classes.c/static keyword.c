#include<stdio.h>
int getvelue(){
	
	static int a=1;
	static int b=1;
	printf("%d",a);
	printf("%d\n",b);
	a++;
	b++;
	
	
}
		
	
int main(){
	
	getvelue();
	getvelue();	
	getvelue();	
	getvelue();	
	getvelue();	
	getvelue();
	
	
	
	
	
	
}	
	
	
	
	
	
	
	
	
	

