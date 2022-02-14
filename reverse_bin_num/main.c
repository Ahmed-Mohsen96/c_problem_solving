#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bin_num=0b1001001100; // 0011001001
    int reversed_num=(bin_num>>9)|(bin_num<<9)|
                   ((bin_num>>8 &1)<<1)|
                   ((bin_num>>7 &1)<<2)|
                    ((bin_num>>6 &1)<<3)|
                     ((bin_num>>5 &1)<<4)|
                     ((bin_num>>4 &1)<<5)|
                     ((bin_num>>3 &1)<<6)|
                     ((bin_num>>2 &1)<<7)|
                     ((bin_num>>1 &1)<<8);

    printf("%x",reversed_num);

    return 0;
}
