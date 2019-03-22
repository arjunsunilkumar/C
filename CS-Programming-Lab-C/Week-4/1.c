#include<stdio.h>

int main()
{
	int a[30],ap,min,max=0;
	printf("enter the number of elements in array:-");
	scanf("%d",&ap);
	int k=0;
	for(int i=0;i<ap;i++)
	{
		scanf("%d",&a[i]);
 	}
	for(int i=0;i<ap;i++)
                printf("%d\n",a[i]);
	min=a[0];
	for(int i=0;i<ap;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("Min=%d and Max=%d",min,max);
	return 0;
}

