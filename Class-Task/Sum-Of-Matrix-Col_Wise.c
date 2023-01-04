#include <stdio.h>

int fun(int *arr, int x, int n){
    int s=0;
    for(int i=0 ; i<n ; i++){
        s += *(arr+i*n + x);
    }
    return s;
}

int main()
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i=0 ; i<m ; i++){
        printf("COl %d : %d\n",i+1,fun(*arr,i,n));
    }
    
    return 0;
}
