#include<Stdio.h>
int main()
{
	
	int a=200,b=1000,c=50000;
	
	printf("%d",(a>b)?a:b);
	
	
	printf("%d",(a>b&&a>c)?a:(b>c)?b:c);
	
	
}
