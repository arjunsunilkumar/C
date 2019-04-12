#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b;
	int c=0,i=0;
	printf("Enter a string ");
	scanf("%[^\n]",a);
	printf("Enter a character to count ");
        scanf("%s",&b);
	printf("\n\n%c\n",b);
	for(i=0;i<strlen(a);i++)
		if(a[i]==b)
			c++;
	printf("\nThe number of occurances of %c is %d",b,c);
}
