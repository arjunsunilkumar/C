#include<stdio.h>
void main()
{
	printf("Enter 10 elements \n");
	int a[10],i,p=1,temp;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	do
	{
	printf("\n\n\n1.Display array");
	printf("\n2.Sort array");
	printf("\n3.Replace element");
        printf("\n4.Exit");
	printf("\nSelect an option ");
	int op;
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("\n\nDisplay elements\n\n");
			for(i=0;i<10;i++)
				printf("%d  ",a[i]);
			break;
		case 2:
			for(i=0;i<10;i++)
				for(int j=1;j<10;j++)
					if(a[j-1]>a[j])
					{
						temp=a[j];
						a[j]=a[j-1];
						a[j-1]=temp;
					}
			break;
		case 3:
			printf("Enter element to be replaced ");
			int num;
			scanf("%d",&num);
			for(i=0;i<10;i++)
				if(num==a[i])
				{
					printf("Enter replacement ");
					scanf("%d",&a[i]);
					i=15;
				}
			if(i==10)
				printf("NOT FOUND");
			break;
		case 4:
			p=0;
			break;
		default:
			printf("Invalid option try again");
			break;
	}
	}while(p==1);
}
