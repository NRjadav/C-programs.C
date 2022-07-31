#include<stdio.h>
int main(){
	
	
	int economics,history,gujrati,english;
	float percentage ,total;
	printf("enter marks of economics:");
	scanf("%d",& economics);
	printf("enter marks of history:");
	scanf("%d",&history);
	printf("enter marks of gujrati:");
	scanf("%d",&gujrati);
	printf("enter marks of english");
	scanf("%d",&english);
	
	
	
	
	total=economics+history+gujrati;
	
	printf("total marks=%.f\n",total);
	
	percentage=total/3;
	printf("percentage=%.2f\n",percentage);
	
	if(percentage>=90){
		
	printf("grade A");
		
	}
	
	else if(percentage>=80){
		
	printf("grade B");
		
	}
	
	else if(percentage>=70){
		
	printf("grade C");	
    }
	
	else{
		
	printf("grade d");	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
     
