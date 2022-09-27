#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={3,6,7,4,3};
    int min_arr=arr[0],max_arr=0;
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<size_arr;i++){

        if(max_arr<arr[i]){
            max_arr=arr[i];
        }
        if(min_arr>arr[i]){
            min_arr=arr[i];
        }


    }
    printf("max_number_arr=%d\n",max_arr);
    printf("min_number_arr=%d\n",min_arr);
    return 0;
}
