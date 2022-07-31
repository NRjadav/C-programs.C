#include<stdio.h>
int main(){
	
	
	int ch;
	float ncr,lrc,brc,nsq,res;
	
	printf("enter any choice:\n");
	printf("1.area of cirle\n");	
	printf("2.area of square\n");
	printf("3.area of rectangle\n");	
	scanf("%d",&ch);
	
	switch(ch)
	{
		
		case 1:
		      
		      printf("enter the redios of the circle:");
		      scanf("%f",&ncr);
		      res=3.14*ncr*ncr;
		      printf("area of circle is:%.2f",res);
		      
		      break;
		
	    case 2: 	
		      
		      printf("enter the side of square:");
		      scanf("%f",&nsq);
		      res=nsq*nsq;
		      printf("area of square:%.2f",res);
		      
		      break;
		      
		case 3:
			   
	          printf("enter the length of the rectangle:");
	          scanf("%f",&lrc);
	          printf("enter the breadth of the rectangle:");
	          scanf("%f",&brc);
	          res=lrc*brc;
	          printf("area of rectangle:%f",res);
	          
	          break;
	          
	   default:
	         
	          printf("invalid choice");
	
	
	
	
	
	
	}
	       
	
}
