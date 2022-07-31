#include<stdio.h>
#include<string.h>
int main(){
	
	
    char str[50];
    
	puts("enter any string:");
	gets(str);
	puts(str);
	

	printf("%d\n",strlen(str));	
	printf("%s\n",strrev(str));	
	printf("%s\n",strupr(str));	
	printf("%s\n",strlwr(str));
	

	
	
char str1[50]="nilesh",str2[50];
strcpy(str2,str1);

printf("%s",str2);


}








