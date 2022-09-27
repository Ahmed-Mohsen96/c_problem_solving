#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,sum=0,digit;
    printf("Enter an integer number:");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("sum of digits=%d\n",sum);

    return 0;
}
