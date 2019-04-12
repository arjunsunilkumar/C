#include<stdio.h>

struct stu
{
	int rno,m[4];
	char name[30];
}s[100];
int main()
{
	int t=0,p=0;
	printf("Enter the name of the student ");
	scanf("%s",s[t].name);
	printf("Enter the marks for 4 subjects ");
	for(int i=0;i<4;i++)
		scanf("%d",&s[t].m[i]);
	while(p==0)
	{	
		int o=0;
		printf("\n\nWelcome to student management system\n\n1.Add a student's details\n2.List failures\n3.List Toppers\n4.Exit\nOption:-");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
			{
				t++;
				printf("Enter the name of the student ");
			        scanf("%s",s[t].name);
			        printf("Enter the marks for 4 subjects ");
			        for(int i=0;i<4;i++)
			                scanf("%d",&s[t].m[i]);
				break;
			}
			case 2:
			{
				for(int i=0;i<=t;i++)
					for(int j=0;j<4;j++)
						if(s[i].m[j]<25)
						{
							printf("\n%s\n",s[i].name);
							break;
						}
				break;
			}	
			case 3:
			{
				int mt[4]={0,0,0,0},max=0;
				for(int j=0;j<4;j++)
				{	
					max=0;
					for(int i=0;i<=t;i++)
						if(s[i].m[j]>max)
						{
							max=s[i].m[j];
							mt[j]=i;
						}
                                }
				printf("\nToppers are :-");
				for(int j=0;j<4;j++)
					printf("\nSubject %d:-%s",j+1,s[mt[j]].name);
				break;
			}
			case 4:
			{	
				p=1;
				break;
			}
			default:
			{
				printf("\nInvalid option");
			}
		}
	}
}
