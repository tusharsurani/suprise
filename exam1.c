#include<stdio.h>

void main()
{
    int bill,total_bill,sc,unit;
    printf("enter the used units =");
    scanf("%d",&unit);
    if(unit<=50)
    {
       bill=unit*0.5;
    }
    else if(unit<=150)
    {
       bill=(unit-50)*0.75+25;
    }
    else if(unit<=250)
    {
       bill=(unit-150)*1.20+75;
    }
    else
    {
       bill =(unit-250)*1.50+120;
    }
    sc=bill*20/100;
    printf("search charge =%d\n",sc);
    total_bill=sc+bill;
    printf(" you pay this = %d",total_bill);
    
}
