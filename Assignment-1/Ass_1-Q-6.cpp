#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int ln(char *s){
    int i=0,len=0;
    while(s[i]!='\0'){
        i++;
        len++;
    }
    return len;
}

int calc_hash(char *arr, int a, int n){
    int pm = 2;
    int ans = 0;
    int k = n;
    
    for(int i=a ; i<n+a ; i++){
        ans += (arr[i])*(pow(pm,(k--)-1));
    }
    
    return ans;
}

void rabin_karp(char *str, char *pat, int n, int m){
    int hash = calc_hash(pat,0,m);
    printf("Pattern Hash : %d\n",hash);
    
    bool flag = false;
    
    for(int i=0 ; i<=n-m ; i++){
        int curr_hash = calc_hash(str,i,m);
        
        if(hash == curr_hash){
            flag = true;
            break;
        }
    }
    
    if(flag)printf("Yes Found");
    else printf("Not Found");

}
int main()
{
    char str[] = "Swastik", pat [] = "was";
    
    int n = sizeof(str)/sizeof(str[0]) - 1; // as it includes the terminating charachter also which is '\0';
    int m = sizeof(pat)/sizeof(pat[0]) - 1; // as it includes the terminating charachter also which is '\0';

    rabin_karp(str,pat,n,m);
    
    return 0;
}