#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int calc_hash(char *arr, int a, int n){
    int pm = 2;
    int ans = 0;
    int k = n;
    
    for(int i=a ; i<n+a ; i++){
        ans += (arr[i])*(pow(pm,(k--)-1));
    }
    
    return ans;
}

int main()
{
    char str[] = "CABDCAC";
    char pat[] = "ABD";
    int n = sizeof(str)/sizeof(str[0])-1;
    int m = sizeof(pat)/sizeof(pat[0])-1;
    
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
    
    if(flag)printf("Found");
    else printf("Not Found");

    return 0;
}
