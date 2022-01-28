#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , sum_odd=0,sum_even=0;
    printf("Enter an integer number:");
    scanf("%d",&num);
    int i=0;
    for(i=0;i<=num;i++){
        if(i%2==0){
            sum_even=sum_even+i;
        }
        else{sum_odd=sum_odd+i;}
    }
    printf("sum_even=%d\tsum_odd=%d\n",sum_even,sum_odd);

    return 0;
}
