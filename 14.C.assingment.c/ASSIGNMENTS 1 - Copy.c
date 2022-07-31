#include<stdio.h>
int main(){
	
	
	int economics,history,gujrati,english,bom;
	float percentage ,total;
	printf("enter marks of economics:");
	scanf("%d",& economics);
	printf("enter marks of history:");
	scanf("%d",&history);
	printf("enter marks of gujrati:");
	scanf("%d",&gujrati);
	printf("enter marks of english:");
	scanf("%d",&english);
	printf("enter marks of bom:");
	scanf("%d",&bom);
	
	
	
	total=economics+history+gujrati+english+bom;
	printf("total marks=%.f\n",total);
	
	percentage=total/5;
	printf("percentage=%.2f\n",percentage);
	
	if(percentage>75){
		
	printf("Distinction");
		
	}
	
	else if(percentage>60 & percentage<=75){
		
	printf("Frist class");
		
	}
	
	else if(percentage>=50 & percentage<=60){
		
	printf("second class");	
    }
	
	else if(percentage>35 & percentage<=50){
		
	printf("pass class");	
	}
	
	else{
		
		printf("fail");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
     
