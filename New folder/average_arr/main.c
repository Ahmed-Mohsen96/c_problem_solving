#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={22,44,66,33,77};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size_arr);
    int i;
    int max=0;
    for(i=0;i<size_arr;i++){
        max+=arr[i];
    }
    int average_arr= max/size_arr;

    printf("average_arr =%d\n",average_arr);

    return 0;
}
