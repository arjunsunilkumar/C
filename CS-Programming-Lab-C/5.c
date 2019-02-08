#include<stdio.h>
void main()
{
int a,b,c;
float temp;
printf("\n1:ADD \n 2:SUBTRACT \n 3:DIVIDE \n 4:MULTIPLY");
printf("\nENTER CHOICE");
scanf("%d",&a);
printf("\nENTER THE TWO INPUTS");
scanf("%d%d",&b,&c);
switch(a)
{
case 1:
{
temp=b+c;
printf("%f",temp);
break;
}
case 2: 
{
temp=b-c;
printf("%f",temp);
break;
}
case 3:
{
temp=b/c;
printf("%f",temp);
break;
}
case 4:
{
temp=b*c;
printf("%f",temp);
break;
}
}
}
