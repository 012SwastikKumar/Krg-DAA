#include <stdio.h>
#include <stdbool.h>

int isPresent(int *arr, int n, int k){
    
    int l=0, r=n-1, ans=0;
    
    while(l<=r){
        int m = (l+r)/2;
        if(arr[m]==k){
            ans = 1;
            break;
        }else if(arr[m]<k){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    
    return ans;
}


int main()
{
    int arr1[] = {1,2,3,4,5,8,9};
    int arr2[] = {2,4,8,9,11,13};
    int arr3[] = {1,2,3,5,9,12,18,18};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    
    for(int i=0 ; i<n1 ; i++){
        if(isPresent(arr2,n2,arr1[i]) && isPresent(arr3,n3,arr1[i])){
            printf("%d ",*(arr1+i));
        }
    }
    
    return 0;
}


// can be solved also by using 3 ptrs