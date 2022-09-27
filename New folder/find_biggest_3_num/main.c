#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    int biggest=0;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    biggest=num1;
    if(num2>num1&&num2>num3){
        biggest=num2;
    }
    else if(num3>biggest){
        biggest=num3;
    }
    printf("%d is biggest\n",biggest);
    return 0;
}
