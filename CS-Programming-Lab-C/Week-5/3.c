#include<stdio.h>
#include<string.h>
int main()
{
        char a[30][30],c[30];
	printf("Enter the total number of words ");
        int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
		scanf("%s",a[i]);
	printf("Enter the substring to replace ");
        scanf("%s",c);
        for(int i=0;i<k;i++)
        {
                if(strcmp(a[i],c)==0)
                {
                        scanf("%s",a[i]);
                }
        }
	for(int i=0;i<k;i++)
                printf("%s\n",a[i]);
        return 0;

}
