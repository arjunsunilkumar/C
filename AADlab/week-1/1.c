#include<stdio.h>
#include<time.h>
double m;
clock_t t1,t2;
int s[20],n;
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",s[i]);
		printf("\t");
	}
}
void rem(int l)
{
	int i,flag=0,j;
	for(i=0;i<n;i++)
	{
		if(s[i]==l)
		{
			for(j=i;j<n-1;j++)
				s[j]=s[j+1];
			n--;
			flag=1;
		}
	}
	if(flag==0)
		printf("Element not found\n");
	else
		display();
}
void next(int k)
{
	int i,flag=0;
	if(n==k)
		printf("End of array\n");
	for(i=k+1;i<n;i++)
	{
		if(s[k]<s[i])
		{
			printf("The next larger element is:\n");
			printf("%d\n",s[i]);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("No element next are greater\n");

}
void main()
{
	int i,c,k,o;
	t1=clock();
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	
	do
	{
		printf("Enter your choice\n1.Remove\n2.Next\n");
		scanf("%d",&c);
		printf("Enter value of i\n");
		scanf("%d",&k);
		if(c==1)
		{
			
			rem(k);
			
			
			FILE *fp;
		        fp=fopen("array.dat","a");
		        fprintf(fp,"%d%f",n,m);
        		fclose(fp);

		}
		else if(c==2)
		{
			
			next(k);
			
			
                        FILE *fp;
                        fp=fopen("array.dat","a");
                        fprintf(fp,"%d%f",n,m);
                        fclose(fp);

		}
		else
			printf("Invalid inut\n");
		printf("\nDo you want to continue\n");
		scanf("%d",&o);
	}while(o==1);

			t2=clock();			
			m=(t2-t1)/(double)CLOCKS_PER_SEC;
			printf("%f",m);
}
