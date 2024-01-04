#include<stdio.h>
void main()
{
    int i,j,n,temp,a[10];
    printf("Enter how numbers to sort\n");
    scanf("%d",&n);
    printf("Enter %d in random order:",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The numbers before sorting.....\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]==a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The numbers after sorting.....");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}