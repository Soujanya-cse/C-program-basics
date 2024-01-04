#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    double a,b,c,d,root1,root2,realpart,imagpart;
    printf("\nEnter the coefficients of a,b and c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a*b*c==0)
    {
        printf("Please enter non zero value for a,b and c\n");
        exit(0);
    }
    d=b*b-4*a*c;
    if(d>0)
    {
        realpart=(-b+sqrt(d))/(2*a);
        imagpart=(-b-sqrt(d))/(2*a);
        printf("\nRoots are real and different\n");
        printf("root1=%.2lf\nroot2=%2.lf\n",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("\nRoots are real and equal\n");
        printf("root1=%.2lf\nroot2=%2.lf\n",root1,root2);
    }
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-d)/(2*a);
        printf("\nRoots are complex\n");
        printf("root1=%.2lf+%.2lfi\nroot2=%2.lf-%.2lfi\n",realpart,imagpart,realpart,imagpart);
    }
}