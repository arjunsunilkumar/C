#include<stdio.h>

int main()
{
	int a[10][10],b[10][10],n;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("Enter the elements of array 1\n");
 	for (int i=0;i<n;i++)
	{
		printf("Enter the elements for row %d\n",i+1);
		for(int j=0;j<n;j++)
		{
			int t;
			scanf("%d",&t);
			a[i][j]=t;
		}
	}
	printf("Enter the elements of array 2\n");
        for (int i=0;i<n;i++)
        {
                printf("Enter the elements for row %d\n",i+1);
                for(int j=0;j<n;j++)
                {
                        int t;
                        scanf("%d",&t);
                        b[i][j]=t;
                }
        }
	printf("\n\n\n\n\n\n\n\n\nSum of the matrices\n\n");
	for (int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        int t=a[i][j]+b[i][j];
                        printf("%d\t",t);
                }
		printf("\n");
        }	
	int s=0;
	for(int i=0;i<n;i++)
		s=s+a[i][i];
	printf("\nSum of diagonals of array 1 is %d",s);
	s=0;
	for(int i=0;i<n;i++)
                s=s+b[i][i];
        printf("\nSum of diagonals of array 2 is %d",s);
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	printf("\nTranspose of matrix 1\n");
	for(int i=0;i<n;i++)
        {
		for(int j=0;j<n;j++)
                {
			int t=a[i][j];
			printf("%d\t",t);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
                for(int j=0;j<i;j++)
                {
                       int temp=b[i][j];
                       b[i][j]=b[j][i];
                       b[j][i]=temp;
                }
  	printf("\nTranspose of matrix 2\n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        int t=b[i][j];
                        printf("%d\t",t);
                }
                printf("\n");
        }
}

