#include<stdio.h>
void main()
{
    float unit,charge;
    char name[20];
    printf("Enter the name of the customer:");
    scanf("%s",name);
    printf("Enter number of units consumed:");
    scanf("%f",&unit);
    if(unit<=200)
    {
        charge=unit*0.8+100;
    }
    if(unit>200 && unit<=300)
    {
        charge=260+(unit-200)*0.9;
    }
    if(unit>300)
    {
        charge=350+(unit-300);
    }
    if(charge>400)
    {
        charge=charge+charge*0.15;
    }
    printf("The total charge is=%f\n",charge);
}