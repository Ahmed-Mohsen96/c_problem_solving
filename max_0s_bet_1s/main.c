#include <stdio.h>
#include <stdlib.h>

int main()
{
    short bin_num=0b100001001000;

    char max=0;
    int i;
    for(i=0;i<32;i++){
        if(((bin_num>>i)&1)==1){
            i++;
            char count_0s=0;
            while(((bin_num>>i)&1)==0 && (i<32)){
                count_0s++;
                i++;
            }
            if(i==32) break;

            if(max<count_0s){
                max=count_0s;
            }
            i--;
        }

    }
    printf("%d\n",max);
    return 0;
}
