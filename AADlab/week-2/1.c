#include<stdio.h>
void main()
{
	int a[100],b[100],n;
	printf("Enter size of array ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(1)
	{
		for(int i=0;i<n;i++)
			b[i]=a[i];
		printf("\n1.Bubble sort\n2.Insertion sort\n3.Selection sort\n4.Quick sort\nPick a technique:-");
		int c;
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			break;
                        case 2:
                        break;
                        case 3:
                        break;
                        case 4:
                        break;
			default:
			break;

		}

