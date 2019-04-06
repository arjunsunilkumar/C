#include<stdio.h>
int main()
{
	int a[100];
	int n;
	int s;
	int flag=0;
	int *ap;
	ap=a;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&n);
	printf("Enter the elements:-\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched:-");
	scanf("%d",&s);
	for(int i=0;i<n;i++)
		if(*(ap+i)==s)
			flag=1;
	if(flag!=0)
		printf("Item found\n");
	else
		printf("Item not found\n");

}

