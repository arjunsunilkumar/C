#include<stdio.h>
void swapr(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void swapv(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nValue in \'a\' is %d and value in \'b\' is %d\n",a,b);
}
int main()
{
	int a,b;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
        printf("\nValue in \'a\' is %d and value in \'b\' is %d",a,b);
	printf("\n\nSwapping using a call by reference function");
	swapr(&a,&b);
        printf("\nValue in \'a\' is %d and value in \'b\' is %d",a,b);
	printf("\n\nSwapping using a call by value function");
	swapv(a,b);
	
	return 0;
}
