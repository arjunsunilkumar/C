#include<stdio.h>
int main()
{
	int f=0,t=0,s,e;
	scanf("%d%d",&s,&e);
	for(int i=s;i<=e;i++)
	{
		t=0;
		for(int j=2;j<i;j++)
			if(i%j==0)
			{
				t=1;
				break;
			}
		if(t==0)
		{
			printf("%d\n",i);
		f=1;
		}
	}
	if(f==0)
		printf("NO PRIME NUMBERS IN RANGE");
	return 0;
}
