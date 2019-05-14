#include<stdio.h>
int add(int a)
{
	if(a/10!=0||a%10!=0)
	return a%10+add(a/10);
	else return 0;
}
int main()
{
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	int sum=add(a);
	printf("Sum of digits is %d",sum);
	return 0;
}
