#include<stdio.h>
int main(){
	
	int x[]={2,3,4,5,6};
	
	int a[20],b[20],sum,i;
	
	for(i=0;i<5;i++){
		
		scanf("%d",&a[i]);
		
	}
	
    for(i=0;i<5;i++){
		
		scanf("%d",&b[i]);
		
	}
	
	for(i=0;i<5;i++){
		
		sum=a[i]+b[i];
		printf("%d \n",sum);
	}
	
}

