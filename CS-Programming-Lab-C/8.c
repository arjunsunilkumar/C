#include<stdio.h>
void main()
{
int a;
printf("1:TRIANGLE 2:RECTANGLE 3:CIRCLE 4:SQUARE\n ENTER YOUR CHOICE");
scanf("%d",&a);
switch(a)
{
case 1:
{
	float e,b,c;
	printf("\nENTER BASE AND HEIGHT"); 
	scanf("%f%f",&e,&b);
	c=(0.5*e*b);
	printf("THE AREA IS%f",c);
	break;
}
case 2:
{
	float e,b,c;
	printf("ENTER DIMENSIONS");
	scanf("%f%f",&e,&b);
	c=b*e;
	printf("THE AREA IS%f",c);
	break;
}
case 3:
{
	float a,b;
	printf("ENTER RADIUS");
	scanf("%f",&a);
	b=3.14*a*a;
	printf("THE AREA IS%f",b);
	break;
}
case 4:
{
	float b,e,c;
	printf("ENTER DIMENSIONS");
	scanf("%f%f",&b,&c);
	e=b*c;
	printf("THE AREA IS%f",e);
	break;
}
}
}
