#include <stdio.h>

void zero_one(int *arr, int n){
    int zero=0, one=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i])one++;
    }
    zero = n-one;
    int a=0;
    while(zero--)arr[a++]=0;
    while(a<n)arr[a++]=1;
}

int main()
{
    int arr[] = {1,0,1,0,1,0,1};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    zero_one(arr,n);
    
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}