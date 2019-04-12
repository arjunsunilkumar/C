#include<stdio.h>
#include<string.h>
int main()
{
	char a[30][30],b[900],c[30];
	printf("Enter a string ");
	scanf("%[^\n]",b);
	int i=0,j=0,k=0,f=0;
	while(b[i]!='\0')
	{	
		f=0;
		printf("%c\n",b[i]);
		if(b[i]==' ')
		{
			j++;
			k=0;
			f=1;
		}
		if(f==0)
		a[j][k++]=b[i++];
	}
	for(i=0;i<=j;i++)
		printf("%s\n",a[i]);
	printf("Enter the substring to replace ");
	scanf("%[^\n]",c);
	for(i=0;i<j;i++)
	{
		if(strcmp(a[i],c)==0)
		{
			scanf("%[^\n]",a[i]);
		}
	}
	return 0;
}
