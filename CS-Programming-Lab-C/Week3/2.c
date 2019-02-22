#include<stdio.h>
#include<math.h>
int main()
{
	float x,s=0;
 	scanf("%f",&x);
 	for(int i=2;i<=14;i+=2)
 	{
		int f=1; 
		for(int p=1;p<=i-1;p++)
			f*=p;
		if(i%4!=0)
			s=s+((pow(x,i-1))/f);
		else
			s=s-((pow(x,i-1))/f);
	}
	printf("%f",s);
	return 0;
}
