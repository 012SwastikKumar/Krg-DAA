#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0 ; i<n/2 ; i++){
        swap((arr+i),(arr+n-1-i));
    }
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
