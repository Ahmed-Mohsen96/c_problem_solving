#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={2,4,5,6,7};
    int size_arr=sizeof(arr)/sizeof arr[0];
    int reverse_arr[size_arr];
    int i,j;
    for(i=0,j=size_arr-1;i<size_arr;i++,j--){

                reverse_arr[j]=arr[i];


    }
    for(i=0;i<size_arr;i++){
        printf("%d\n",reverse_arr[i]);
    }

    return 0;
}
