#include<stdio.h>
int main(){
	
	float p,r,t,a,si,ci;
	
	
	
	printf("enter the principle amount:");
	scanf("%f",&p);
	
	printf("enter the rate of interest:");
	scanf("%f",&r);
	
	printf("enter the time:");
	scanf("%f",&t);

    si=(p*r*t)/100;	 
	printf("simple interest is:%.2f\n",si);  
	
	
	a=p*(pow((1+r/100),t));
	ci=a-p;
	printf("compound interrst:%.2f",ci);
	
	
	
	
	
	
	
	
	
	
	
}
