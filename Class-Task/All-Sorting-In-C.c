#include <stdio.h>

void swap(char *a, char *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sel_sort(char *arr, int n){
    for(int i=0 ; i<n-1 ; i++){
        int min_ix = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[min_ix]){
                min_ix = j;
            }
        }
        swap((arr+min_ix),(arr+i));
    }
}

int ln(char *s){
    int i=0,len=0;
    while(s[i]!='\0'){
        i++;
        len++;
    }
    return len;
}

int main()
{
    char ch[] = "asdfg";
    int len = ln(ch);
    sel_sort(ch,len);
    printf("%s",ch);

    return 0;
}
