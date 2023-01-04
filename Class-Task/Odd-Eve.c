#include <stdio.h>

int Fun(int *arr, int n){
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]&1)c++;
    }
    return c;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int odd = Fun(arr,n);
    int eve = n-odd;
    
    printf("Odd : %d\nEven : %d",odd,eve);
    
    return 0;
}
