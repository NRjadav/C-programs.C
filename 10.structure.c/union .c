#include<stdio.h>

union nil
{
    int a;
    
	char name[20];	
};


int main()
{
	union nil N;
//    scanf("%d",&N.age);
//   printf("%d",N.age);
//    
//   scanf("%s",&N.name);
//   printf("%s",N.name);

     printf("%d",sizeof(N));

}
