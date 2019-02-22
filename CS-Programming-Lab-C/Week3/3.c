#include<stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		s=s+((b%10)*(b%10)*(b%10));
		b=b/10;
	}
	if(a==s)
		printf("ARMSTRONG");
	else
		printf("NOT ARMSTRONG");
	return 0;
}
