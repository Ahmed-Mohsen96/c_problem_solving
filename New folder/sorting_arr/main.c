#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[]={5,6,9,1};

    int arr_size=sizeof(arr1)/sizeof(arr1[0]);
    //int arr2[arr_size];
    int i,j;
// ascending
   /* for(i=0;i<arr_size;i++){
        for(j=i+1;j<arr_size;j++){
            if(arr1[i]>arr1[j]){
                // swap
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }*/
    // descending
    for(i=0;i<arr_size;i++){
        for(j=i+1;j<arr_size;j++){
            if(arr1[i]<arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;i<arr_size;i++){
        printf("%d\n",arr1[i]);
    }

    return 0;
}
