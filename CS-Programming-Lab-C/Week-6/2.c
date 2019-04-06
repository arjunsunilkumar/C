#include<stdio.h>
struct term
{
	float coeff;
	int exp;
}p[20],q[20],r[40];
int main()
{
	int pd,qd,rd;
	printf("Enter the degrees of the two polynomials ");
	scanf("%d%d",&pd,&qd);
	printf("Enter the coefficients of the 1st polynomial");
	for(int i=pd;i>=0;i--)
	{
		p[pd-i].exp=i;
		scanf("%f",&p[pd-i].coeff);
	}
	printf("Enter the coefficients of the 2nd polynomial");
        for(int i=qd;i>=0;i--)
        {
                q[qd-i].exp=i;
                scanf("%f",&q[qd-i].coeff);
        }
	if(pd>qd)
	{
		for(int i=0;i<=pd;i++)
		{
			rd++;
			r[i].exp=p[i].exp;
			r[i].coeff=p[i].coeff;	
		}
		for(int i=0;i<=rd;i++)
		{
			for(int j=0;j<=qd;j++)
			{
				if(r[i].exp==q[j].exp)
					r[i].coeff=r[i].coeff+q[j].coeff;
			}
		}
	}
	else
	{
	        for(int i=0;i<=qd;i++)
                {
                        rd++;
                        r[i].exp=q[i].exp;
                        r[i].coeff=q[i].coeff;
                }
                for(int i=0;i<=rd;i++)
                {
                        for(int j=0;j<=pd;j++)
                        {
                                if(r[i].exp==p[j].exp)
                                        r[i].coeff=r[i].coeff+p[j].coeff;
                        }
                }
        }
	printf("\n\nThe sum of the polynomials is");
	printf("%fX^%d",r[0].coeff,r[0].exp);
	for(int i=1;i<=rd;i++)
		printf("+%fX^%d",r[i].coeff,r[i].exp);
}
