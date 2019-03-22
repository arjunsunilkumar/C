#include<stdio.h>
void main()
{	int a,b,c,mx,mi;
	scanf("%d%d%d",&a,&b,&c);
	printf("\n%d%d%d",a,b,c);
	if(a>b){if(a>c)
		{mx=a;
		if(b>c)	mi=c;else mi=b;}}
	else if(b>c)
                {if(b>a) {mx=b;
                 if(a>c) mi=c;else mi=a;}}
	else{mx=c;
		if(a>b) mi=b;else mi=a;}
	printf("Largest is %d and smallest is %d",mx,mi);}

