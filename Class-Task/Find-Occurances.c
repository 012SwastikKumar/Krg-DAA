#include <stdio.h>

int left_occ(int *arr, int n, int k){
    
    int l=0, r=n-1, ans=-1;
    
    while(l<=r){
        int m = (l+r)/2;
        if(arr[m]==k){
            ans = m;
            r=m-1;
        }else if(arr[m]<k){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    
    return ans;
}

int right_occ(int *arr, int n, int k){
    
    int l=0, r=n-1, ans=-1;
    
    while(l<=r){
        int m = (l+r)/2;
        if(arr[m]==k){
            ans = m;
            l=m+1;
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
    int arr[9] = {1,2,3,4,5,8,8,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
    
    int left_index = left_occ(arr,n,k);
    int right_index = right_occ(arr,n,k);
    
    if(left_index == -1 || right_index == -1){
        printf("-1");
    }else{
        printf("No. of Occ of %d : %d",k,right_index-left_index+1);
    }
    
    return 0;
}
