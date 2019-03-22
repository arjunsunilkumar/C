#include<stdio.h>
void main()
{
 float u,t,a,s;
 printf("Enter the values for u,t and a");
 scanf("%f%f%f",&u,&t,&a);
 s=u*t+(a*t*t)*.5;
 printf("The distance travelled is %f",s);
}

