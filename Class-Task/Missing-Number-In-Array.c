#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]!=arr[i+1]-1){
            printf("%d",arr[i]+1);
        }
    }

    return 0;
} 
