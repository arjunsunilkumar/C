#include<stdio.h>
void main()
{
	int a[30][30],b[30][30],c[30][30],m,n;
	printf("Enter the size of arrays ");
	scanf("%d%d",&m,&n);
	printf("enter the 1st array elements ");
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	printf("enter the 2nd array elements ");
	for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
                scanf("%d",&b[i][j]);
	for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
		c[i][j]=a[i][j]+b[i][j];
	printf("\n\n\n\n SUM OF MATRICES IS:-\n\n\n");
	for(int i=0;i<m;i++)
	{
		printf("\n\n");
        	for(int j=0;j<n;j++)
			printf("%d   ",c[i][j]);
	}
}
