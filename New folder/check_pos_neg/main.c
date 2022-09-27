#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    printf("Enter an integer number:");
    scanf("%d",&num);
    if(num>0){
        printf("%d is positive\n",num);
    }
    else{printf("%d is negative",num);}
    return 0;
}
