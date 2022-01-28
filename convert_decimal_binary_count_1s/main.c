#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,base=1,binary_num=0,temp=0,num_1s=0,num_0s=0;
    printf("Enter an decimal number:");
    scanf("%d",&num);
    temp=num;
    while(num>0){
            int digit=num%2;
            binary_num +=digit*base;
            num/=2;
            base *=10;
            if(digit==1){
                num_1s++;
            }
            else{num_0s++;}


    }
    printf("%d is binary from decimal %d\n",binary_num,temp);
    // number of 1s
    printf("%d is number of 1s\n",num_1s);
    printf("%d is number of 0s\n",num_0s);
    return 0;
}
