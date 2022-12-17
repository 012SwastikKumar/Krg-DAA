#include <stdio.h>

void c_sort(char *arr, int n){
    int alpha[26] = {0};
    for(int i=0 ; i<n ; i++){
        alpha[arr[i]-97]++;
    }
    int k=0;
    for(int i=0 ; i<26 ; i++){
        while(alpha[i]>0){
            arr[k++] = i+97;
            alpha[i]--;
        }
    }
}

int main()
{
    char arr[] = "fsamaserfdba";
    int n = sizeof(arr)/sizeof(arr[0])-1;
    
    c_sort(arr,n);
    
    for(int i=0 ; i<n ; i++){
        printf("%c",arr[i]);
    }

    return 0;
}