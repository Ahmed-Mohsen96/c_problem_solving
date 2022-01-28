#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp=0;
    printf("Enter num1 and num2:");
    scanf("%d%d",&num1,&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("num1=%d\tnum2=%d\n",num1,num2);
    return 0;
}
