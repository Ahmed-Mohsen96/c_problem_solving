#include <stdio.h>
#include <stdlib.h>

int main()
{
    // convert binary number to decimal
    // 1010 base2  decimal 10 base 10

    int num=0b1010,digit=0,decimal_num=0,octal_num=0,temp_num=0;
    int base=1;
    int temp=num;
    while(num>0){
        digit=num%2;
        decimal_num += digit*base;
        num/=2;
        base *=2;
    }
    // to octal
    temp_num=decimal_num;
    base=1;
    digit=0;
    while(temp_num>0){
        digit=temp_num%8;
        octal_num += digit*base;
        temp_num/=8;
        base *=10;
    }

    printf("%d is decimal from %d\n",decimal_num,temp);
    printf("%d is octal from %d\n",octal_num,temp);
    return 0;
}
