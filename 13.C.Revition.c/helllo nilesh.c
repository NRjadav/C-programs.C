/*#include<stdio.h>
 int main(){
	
	
	//printf("hello nilesh");
	
	int number=26;
	float pi=3.14;
	char precentage='%';
	

	printf("number is %d",number);
	printf("pi is %f",pi);
	printf("precentage is %c",precentage);
	
	
	
	int a,b,sum;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	sum=a+b;
	printf("sum is %d",sum);
	
/*	int side;
	printf("enter side:");
	scanf("%d",&side);
	side=side*side;
	printf("side is %d",side);
	
	
	float redius;`
	printf("enter redius:");
	scanf("%f",&redius);
	redius=3.14*redius*redius;
	printf("circle is %f",redius);
	
	
   printf("output:%d",5+2/2*3);	
   
   printf("%d\n",4==4);
   
   printf("%d\n",4<3);
   printf("%d\n",3<4);
   printf("%d\n",4<4);
   printf("%d\n",4<=4);

  printf("%d\n",4!=4);
  printf("%d\n",3!=4);
  

  
/*  printf("%d\n",3<4 && 3<5);
  printf("%d\n",3<4 || 5<4); 

                                                                                   ******** if else;***********
   	
int age=

printf("enter age:");
scanf("%d",&age);


if(age>=18){
	printf("adult");
}

else if(age>13 && age<18){
	printf("teenegar");
}

else if(age>5 && age<=13){
	printf("child");
}

else
{
	printf("not adult");
	
}*/

/*#include<stdio.h>
int main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("evan ");
		
	}
	else
	{
		printf("odd ");
	}
}*/
//                                                             *****************tarnary opretar**************
/*#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	
	max=(a>b)?a:b;
	printf("%d",max);
	
}*/

/*#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
	//	if(i<=6)
	//	{
	//		printf("%d\n",i);
	//	}
		
		if(i==6 || i==2)
		{   
		    continue;
			break;
			continue;
	    }
	         printf("%d\n",i);
	}
}*/
	
/*#include<stdio.h>
int main()
{
	int i;
	i=1;
    somename:
	if(i<=20)
	{
		printf("%d\n",i);
		i++;
	}
	
	goto somename;
	
}*/

/*                                                                                     ********switch******* 


char day;
printf("enter day:");
scanf("%c",&day);

switch(day){


           case 's':
           	      printf("sunday\n");
           	      break;
           	      
           	      
           case 'm':
		         printf("monday\n");
				 break;	      
           	      
            
           case 't':
           	     printf("tuesday\n");
           	     break;
           	     
           case 'w':	     
                  printf("wednesdey\n");
				  break;
				  
				  
		   case 'h':		          	
           	     printf("thursday\n");
           	     break;
           	     
           	
           case 'f':
		         printf("friday\n");
				 break;
				 	
           	
           case 'u':
           	     printf("stureday\n");
           	     break;
}
    */       	     
           	     
/*
//                                                                            ********loops********        	     
     // for loops 
	 
#include<Stdio.h>
int main()
{
				    	
           	
       int i;
		   	
		for(i=1;i<=5;i++)	
        	   printf("hello nilesh\n");
      	for(i=1;i<=5;i++)   
           	   printf("hello jaydip\n");
		for(i=1;i<=5;i++)	    
			   printf("hello krishna\n"); 
		for(i=1;i<=5;i++)	    
		       printf("hello shivam\n");
		for(i=1;i<=5;i++)	     
			   printf("hello ravi\n");}
           	
           	
      while loops
	   
	   int n=1;
	   
	   while(n<=5){
	   n++ ;   	
           	
           printf("hello nilesh\n");}
           
    do while loops
	       
       int m=1;
       
        do{
       	printf("hello\n");
       	m++;}	
        while(m<=50);	
}

/*#include<stdio.h>
int main()
{
	
	int row,col;

    for(row=1;row<10;row++)
	{
		for(col=1;col<10;col++)
		{
			printf(" * ");
		}
		
	printf("\n");	
	}
	
}*/

/*#include<stdio.h>
int main()
{
	
	char n;
	printf("enter alphabet:");
	scanf("%c\n",&n);
	for(n='A';n<='Z';n++)
	{
	
		if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
		{
		
		    printf("svar..!\n",n);
		    
	    }
	    
	    else 
	    {
	    	printf("vaynjan...!\n",n);
		}
	//	printf("%c\n",n);
	    
   }
}*/

//                                                  *********multipication table***********

/*#include<stdio.h>
int main()
{
	int n,i;
	printf("enter eny number:");
	scanf("%d",&i);
	
	for(n=1;n<=10;n++)
	{
		
		printf("%d*%d=%d\n",i,n,i*n);
	}
}*/
	
//                                                                                ********function:*********

/*#include<stdio.h>
int sum(){

      int a,b;
      
      printf("enter a\n");
      scanf("%d",&a);
      
      printf("enter b\n");
      scanf("%d",&b);
      
      printf("sum is %d",a+b);}

 int main(){
 	
 	sum();
 	sum();
 	return 0;
 	
 
#include<stdio.h>
int max(int x,int y)
{    
      int max;
      max=(x>y)?x:y;
      printf("%d",max);
	
}
int main()
{
	
	max(30,20);
	return 0;
	 
}

/*#include<stdio.h>


int goodmorning()

     { printf("good morning\n");
	   printf("hello nilesh\n");}
    
int goodafternoon()

    { printf("good afternoon\n");}	
			  
int goodnigth()
      			  
	{printf("good nigth\n");}
			  	  

int main()
{
	goodmorning();
    goodafternoon();
	goodnigth();
	
	return 0;
	
}

#include<stdio.h>

        int nilesh()
        {
        	printf("name:jadav nileshbhai ramjibhai\n");
        	printf("dob:30-01-2000\n");
        	printf("std:m.a");
		} 
         
        int jaydeep()
        {
        	printf("\n\nname:jadav jaydeepbhai ramjibhai\n");
        	printf("dob:25-08-2001\n");
        	printf("std:b.com");
		} 

        int urvashi()
        {
        	printf("\n\nname:jadav urvashibenbhai ramjibhai\n");
        	printf("dob:30-01-2004\n");
        	printf("std:b.a\n\n");
		} 


int main()
{
	
	     nilesh();
	     jaydeep();
	     urvashi();
		  
	     nilesh();
	     jaydeep();
	     urvashi(); 
	
}*/
/*#include<stdio.h>
int nilu(int x,int y)
{
	return x+y;
	
	
}
int main()
{
	printf("%d",nilu(1,10));
	
}*/

//                                                        *******reverse number*******
/*#include<stdio.h>
int main()
{

    int num,rem,res=0;
	printf("enter number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;// 87.6   8.7  0.8
		 printf("%d",rem);// 6  7  8
		num=num/10; // 87.6  8.7   0.8
	}
	
}*/

//                                                   **********fibonachi sirig************
      
      
/*#include<Stdio.h> 
int main()
{

      int n1=0,n2=1,res,i;
      
      for(i=1;i<=10;i++)
      {
      	   res=n1+n2;
      	   n1=n2;
      	   n2=res;
      	   printf("%d\n",res);
      }
}*/

/*#include<stdio.h>
int main()
{  
	int n1=0,i;
	
	for(i=1;i<=10;i++)
	{
		n1=n1+i;
		
	}
	printf("%d",n1);
	
	
}*/
  
//                                                      *********array******
														  
/*#include<stdio.h>
int main()
{
	
	int arr[]={1,2,3,4,5,6,7,8,8,8,8,8,8,9},size;
	size=(sizeof(arr)/sizeof(arr[0]));
	printf("%d\n",size);
	
}*/

/*#include<stdio.h>
int main()
{
	
	int i,n[6];
	
	scanf("%d",&n[i]);
	printf("%d\n",n[i]);
	
	for(i=0;i<5;i++)
	{
	    scanf("%d",&n[i]);	
		
	}
	
	for(i=0;i<5;i++)
	{
	    printf("%d\n",n[i]);	
		
	}
	
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	
//	int n[]={ };
	
	int a[10],b[10],c[10],sum;
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter a:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<3;i++)
	{
		  printf("enter b:");
	      scanf("%d",&b[i]);	
	}
	
	for(i=0;i<3;i++)
	{
		  printf("enter c:");
	      scanf("%d",&c[i]);	
	}
	
	for(i=0;i<3;i++)
	{
		  sum=a[i]+b[i]+c[i];
		  printf("%d\n",sum);
	}
	   

}*/	


/*#include<stdio.h>
int main()
{
	int arr[4][2];
	int row,col;
	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&arr[row][col]);
		}
	}
	
	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d",arr[row][col]);
		}
		
		    printf("\n");  
	}
	
}*/

/*#include<stdio.h>
int main()
{
	int a[]={1,2,3,10,5,6},sum=0,i;
	for(i=0;i<6;i++)
	{
		sum=sum+a[i];
	}
	
	printf("%d",sum);
	
	
}*/

/*#include<stdio.h>
int main()
{
	int arr[]={1,82,83,46,55,66};
	int i,max=arr[0];
	
	for(i=0;i<6;i++)
	{
		if(arr[i]>max)
		{
             max=arr[i];			
		}
		
	}
	
	printf("%d",max);
	
}*/

//                                                     **************static keyword**************

/*#include<stdio.h>
int nilesh()
{
	static int a=0;
	a++;
	printf("%d",a);
}
int main()
{
	
	nilesh();
	nilesh();
	nilesh();
	nilesh();
}/*

//                                                                ***********string***********

/*#include<stdio.h>
#include<string.h>
int main()
{
   char n[]="jadav nileshbhai ramjibhai";
   char j[]="jadav jaydeepbhai ramjibhai";
	
	printf("%s\n%s",n,j);
	puts(n);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	
      char name[50];
	  
	  printf("enter eny name :");
	  gets(name);
	  puts(name);	
	  
	  printf("%d\n",strlen(name));
	  printf("%s\n",strrev(name));
	  printf("%s\n",strupr(name));
}

#include<stdio.h>
#include<string.h>
int main()
{
	
	char n[20]="jadav",m[20];

     strcpy(m,n);
     printf("%s",m);
	
	
	char i[20],j[20]="jadav";
	strcpy(i,j);
	printf("%s",i);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char n1[20]="Hello ",n2[20]="nilesh";
	
    strcat(n1,n2);
	puts(n1);
	
	strcmp(n1,n2);
	
	if(strcmp(n1,n2)==0)
	{
		printf("equal...!");
		
	}
	else
	{
		printf("not equal...!");
	}
}*/


//                                                               ************** mecroc*****************

/*#include<Stdio.h>
#define money 100

int main()
{
	
	printf("%d\n",money);
	printf("%d\n",money+200-100*10/10);//100+200-100*10/10=200
}*/

//                                                  *************matrix*************
/*#include<stdio.h>
int main()
{
	
	int arr[100][100];
	int row,col;
	
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			scanf("%d",&arr[row][col]);
		}
	}
	
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			printf("%d",arr[row][col]);
		}
		
		printf("\n");
	}
	
}
//                                                                   ***************sum/max of digits***************

/*#include<stdio.h>
int main()
{
	
	int n=123456,sum=0,rem;
	
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		
	}
	
	printf("%d",sum); 
}*/

/*#include<stdio.h>
int main()
{	
	int n=123456,sum=0,rem=0;
	
    while(n>0)
    {
    	rem=n%10;
    	if(sum<rem)
    	{
    		sum=rem;
		}
    	n=n/10;
    	
	}
	
	printf("%d",sum);
	
	
}*/

//                                                                *************structure//union************



/*#include<stdio.h>
struct xyz
{
	
	int age;
	char name[50];
	float pi;
	
	
};
int main()
{
	struct xyz s;
	
	scanf("%d%s%f",&s.age,&s.name,&s.pi);
	printf("%d\n%s\n%1.f",s.age,s.name,s.pi);
	
}

#include<Stdio.h>
union xyz
{
	int age;
	char name[50];
	float pi;
	
};
int main()
{
	union xyz n;
	
	scanf("%d",&n.age);
	printf("%d",n.age);
	
	scanf("%s",&n.name);
	printf("%s",n.name);
	
	scanf("%f",&n.pi);
	printf("%1.f",n.pi);
	
}*/
//                                                   *****************recursive function*******************

/*#include<stdio.h>
int sum(int x)//3
{
	
	if(x>0)//3>0
	{
		return x+sum(x-1);//
	}
}

int main()
{
	printf("%d",sum(2));
}
*/

//                                                          ***************malloc calloc****************

/*#include<stdio.h>
int main()
{
	
	int *ptr;
	
	ptr=(int*)malloc(20*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("memory not allocated...!");
		
	}
	else
	{
		printf("memory  allocated...!");
		
	}
}

#include<stdio.h>
int main()
{
	
	int *ptr;
	
	ptr=(int*)calloc(200,sizeof(int));
	
	if(ptr==NULL)
	{
		printf("memory not allocated...!");
		
	}
	else
	{
		printf("memory  allocated...!");
		
	}
}*/


//                                                           *******************pointer******************

/*#include<stdio.h>
int main()
{
	int  a=100,*p,**q;
	
	p=&a;
	q=&p;
	printf("%d",*p);	
	printf("%d",**q);
	
}*/




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




