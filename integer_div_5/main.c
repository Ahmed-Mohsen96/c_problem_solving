#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sum of all integers div by 5
    int num,sum_div_5=0;
    printf("Enter an integer:");
    scanf("%d",&num);
    int i=0;
    for(i=0;i<=num;i++){
        if(i%5==0){
            sum_div_5+=i;
        }

    }
    printf("%d is sum div by 5\n",sum_div_5);
    return 0;
}
