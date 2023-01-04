#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(int *arr, int l, int r){
    while(l<r){
        swap((arr+l),(arr+r));
        l++;
        r--;
    }
}

void rot(int *arr, int n, int k){
    rev(arr,0,n-k-1);
    rev(arr,0,n-1);
    
}

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    // int m = sizeof(arr[0])/sizeof(arr[0][0]);
    int k=10;
    
    rot(arr, n, k%n);
    
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
