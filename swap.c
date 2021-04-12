#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two values to swap\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping the value of a = %d and b= %d\n",a,b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("After swapping the value of a = %d and b = %d",a,b);
	
	return 0;
}
