#include<stdio.h>
void main()
{
    int i,n,key,a[50],flag=0,pos;
    int low,mid,high;
    printf("Enter how many numbers you want to store in array\n");
    scanf("%d",&n);
    printf("Enter the numbers to store in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you want to search in array\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+mid)/2;
        if(a[mid]==key)
        {
            flag==1;
            pos=mid;
            break;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("%d is found in array at position %d\n",key,pos+1);
    }
    else
    {
        printf("%d is not found in array",key);
    }
}