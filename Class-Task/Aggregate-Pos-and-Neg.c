#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[] = {1,-2,-3,4,-5,6,7,8,-9};
    
    int n = sizeof(arr)/sizeof(arr[0]);    
    int l=0, r=n-1;
    
    while(l<=r){
        if(arr[l]>0 && arr[r]<0){
            swap(&arr[l],&arr[r]);
            l++;
            r--;
        }
        while(arr[l]<0){
            l++;
        }
        while(arr[r]>0){
            r--;
        }
    }
    
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
