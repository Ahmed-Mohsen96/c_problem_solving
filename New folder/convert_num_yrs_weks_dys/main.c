#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,years=0,weeks=0,days=0,rem_weeks=0,rem_days=0;
    printf("Enter number:");
    scanf("%d",&num);

    if(num>=365){
        years=num/365;
        rem_weeks=num%365;
        weeks=rem_weeks/7;
        rem_days=rem_weeks%7;
        days=rem_days;
    }
    else{
        weeks=num/7;
        rem_days=num%7;
        days=rem_days;
    }
    printf("years:%d\tweeks:%d\tdays:%d\n",years,weeks,days);

    return 0;
}
