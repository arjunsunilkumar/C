#include<stdio.h>

struct stu
{
	int rno,m[4];
	char name[30];
}s[100];
int main()
{
	int t=0;
	printf("Enter the name of the student ");
	scanf("%s",s[t].name);
	printf("Enter the marks for 4 subjects ");
	for(int i=0;i<4;i++)
		scanf("%d",&s[t].m[i];
	while(i>=0)
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
			                scanf("%d",&s[t].m[i];
			}
			case 2:
			{
				for(int i=0;i<=t;i++)
			}	
		}
	}
}
