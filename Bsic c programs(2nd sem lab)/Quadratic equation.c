#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    double a,b,c,d,root1,root2,realpart,imagpart;
    printf("\nEnter the values of a,b and c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a*b*c==0)
    {
        printf("Enter non zero values for a,b and c\n");
        exit(0);
    }
    d=b*b-4*a*c;
    if(d>0)
    {
        realpart=(-b+sqrt(d))/(2*a);
        imagpart=(-b-sqrt(d))/(2*a);
        printf("\nroots are real and different\n");
        printf("root1=%.2lf\nroot2=%.2lf\n",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("\nroots are real and equal");
        printf("root1=%.2lf\nroot2=%.2lf\n",root1,root2);
    }
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-d)/(2*a);
        printf("\nroots are complex");
        printf("root1=%.2lf+%.2lfi\nroot2=%.2lf-%.2lfi\n",realpart,imagpart,realpart,imagpart);
    }
}