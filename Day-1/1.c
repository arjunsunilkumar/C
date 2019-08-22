#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ts[50][50];
	printf("Enter the string ");
	gets(&s);
	int len=strlen(s),j=1,n=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]==' ')
		{
			j++;
			n=0;
		}
		else
                ts[j][n++]=s[i];

	}
	int x=1;
	do
	{
		printf("1.Concatnate\n2.Delete substring\n3.Print string\n4.Exit");
		printf("\nEnter the option:-");
		int op;
		scanf("%d",&op);
		switch(op)
		{
		case 1:
		printf("Enter the string to Concatnate ");
	        scanf("%s",&s);
		n=0;
		j++;
		len=strlen(s);
		for(int i=0;i<len;i++)
        	{
               		if(s[i]==' ')
                	{
                	        j++;
                	        n=0;
                	}
			else ts[j][n++]=s[i];

        	}
		break;
		case 2:
		printf("Enter the string to Delete ");
		scanf("%s",s);
		for(int i=1;i<=j;i++)
		{
			if(strcmp(s,ts[i])==0)
			{
				for(int p=i;p<=j;p++)
					strcpy(ts[p],ts[p+1]);
				j--;
				i=j+1;
			}
		}
		break;
		case 3:
		printf("\n");
		for(int i=1;i<=j;i++)
			printf("%s ",ts[i]);
		break;
		case 4:
		x=0;
		break;
		default:
		printf("INVALID OPTION");
		break;
		}
	}while(x==1);
}
