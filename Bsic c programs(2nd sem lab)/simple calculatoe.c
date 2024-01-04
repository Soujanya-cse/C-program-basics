#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b;
    int ch;
    while(1)
    {
        printf("Enter the values of a and b\n");
        scanf("%d%d",&a,&b);
        printf("Enter your choice:\n");
        printf("1-->Addition\n2-->Subtraction\n3-->Multiplication\n4-->Division\n5-->Modulus\n6-->Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("%d+%d=%d",a,b,a+b);
                   break;
            case 2:printf("%d-%d=%d",a,b,a-b);
                   break;
            case 3:printf("%d*%d=%d",a,b,a*b);
                   break;
            case 4:printf("%d/%d=%d",a,b,a/b);
                   break;
            case 5:printf("%d/%d=%d",a,b,a%b);
                   break;
            case 6: exit(0);
            default:printf("Invalid choice!");
                    break;
        }   
    }
}