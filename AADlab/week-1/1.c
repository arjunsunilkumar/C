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
void removee(int l)
{
	int i,flag=0,j;
	for(i=0;i<n;i++)
	{
		if(i==l)
		{
			for(j=i;j<n;j++)
				s[j]=s[j+1];
			n--;
			flag=1;
		}
	}
	if(flag==0)
		printf("element not found\n");
	else
		display();
}
void next(int k)
{
	int i,flag=0;
	if(n==k)
		printf("sorry end of array\n");
	for(i=k+1;i<n;i++)
	{
		if(s[k]<s[i])
		{
			printf("the next larger element is:\n");
			printf("%d",s[i]);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("sorry no element next are greater\n");

}
void main()
{
	t1=clock();
	int i,c,k,o;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	do
	{
		printf("enter ur choice\n1.remove\n2.next\n");
		scanf("%d",&c);
		printf("enter value of i\n");
		scanf("%d",&k);
		if(c==1)
			removee(k);
		else if(c==2)
			next(k);
		else
			printf("invalid choice\n");
		printf("do u want to continue\n");
		scanf("%d",&o);
	}while(o==1);
	t2=clock();
	m=(t2-t1)/(double)CLOCKS_PER_SEC;
	printf("%f",m);
	FILE *fp;
	fp=fopen("array.dat","a");
	fprintf(fp,"%d%f",n,m);
	fclose(fp);
}
