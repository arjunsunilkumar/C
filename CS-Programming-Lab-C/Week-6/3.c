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

