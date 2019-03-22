#include<stdio.h>

int main()
{
 int a,b;
 scanf("%d",&a);
 b=a%10;
 a=a/10;
 while(a!=0)
 {
  b=b*10+(a%10);
  a=a/10;
 }
 printf("%d",b);
 return 0;
}
