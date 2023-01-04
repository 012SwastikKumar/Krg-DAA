#include <stdio.h>

int Sum(int *arr, int n, int m){
    int s=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++)
        s = s + *((arr+i*m)+j);
    }
    return s;
}

int main()
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/sizeof(arr[0][0]);
    
    printf("%d %d",n,m);
    printf("\n%d",Sum(arr,n,m));
    
    return 0;
}
