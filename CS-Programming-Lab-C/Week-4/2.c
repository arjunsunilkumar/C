#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[50],n;
	printf("enter the number of elements:-\n");
	scanf("%d",&n);
	printf("enter the elements:-");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]); 
	while(1)
	{	
		int o;
		printf("\n\n\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter the option:-");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("enter the element to be inserted:-");
				int e,p;
				scanf("%d",&e);
				printf("enter the position to be inserted:-");
				scanf("%d",&p);
				if(p<=n)
				{
					n++;
					for(int i=n-1;i>=p;i--)
						a[i]=a[i-1];
					a[p-1]=e;
				}
				break;
			case 2:
				printf("enter the element to delete:-");
				int t;
				scanf("%d",&t);
				for(int i=0;i<n;i++)
					if(a[i]==t)
					{	
						n--;
						for (int j=i;j<n;j++)
							a[j]=a[j+1];
					}
				break;			
				
				
			case 3:
				for(int i=0;i<n;i++)
					printf("%d ",a[i]);
				break;
			case 4:
				exit(0);

		}
	}
}
