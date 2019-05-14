#include<stdio.h>
#include<string.h>
void main()
{
	FILE *f1;
	char ch;
	int a=0,e=0,i=0,o=0,u=0;
	f1=fopen("vowel.txt","r");     
	if(f1==NULL)
	printf("File not found");
	else
	{
		while(ch!=EOF)
		{
			ch=getc(f1);
			if(ch=='a')
			a++;
			if(ch=='e')
			e++;
			if(ch=='i')
			i++;
			if(ch=='o')
			o++;
			if(ch=='u')
			u++;
			
			
		}
	if((a>e)&&(a>i)&&(a>o)&&(a>u))
			printf("a has most no of occurence");
	if((e>a)&&(e>i)&&(e>o)&&(e>u))
			printf("e has most no of occurence");
	if((i>a)&&(i>e)&&(i>o)&&(i>u))
			printf("i has most no of occurence");
	if((o>a)&&(o>e)&&(o>i)&&(o>u))
			printf("o has most no of occurence");
	if((u>a)&&(u>e)&&(u>i)&&(u>o))
			printf("u has most no of occurence");
	}
	}
