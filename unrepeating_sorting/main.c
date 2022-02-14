#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[]={2,4,3,2,4};
    int arr_size=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[arr_size];
    int i,j,n=0;
    for(i=0;i<arr_size;i++){
            int flag=0;
        for(j=i+1;j<arr_size;j++){
            if(arr1[i]==arr1[j]){
                flag++;
            }
        }
            if(flag==0){
                arr2[n]=arr1[i];
                n++;
            }
    }
    for ( i=0;i<n;i++){
        printf("%d\n",arr2[i]);
     }


    return 0;
}
