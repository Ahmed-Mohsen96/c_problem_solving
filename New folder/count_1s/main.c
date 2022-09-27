#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bin_num=0b101010;
    char i=0;
    char max_1s=0,max_0s=0;
    for(i=0;i<8;i++){
        if(((bin_num>>i)&1)==1){
            max_1s++;
        }
        else{max_0s++;}
    }
    printf("max_1s=%d\tmax_0s=%d\n",max_1s,max_0s);
    return 0;
}
