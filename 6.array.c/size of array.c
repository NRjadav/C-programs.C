#include<stdio.h>
int main(){
	
	int  arr[]={10,20,30,40,50,60,70,80,90,100},size;
	
	printf("%d\n",arr[9]);
	
	size=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",size);
	
	
	
}
