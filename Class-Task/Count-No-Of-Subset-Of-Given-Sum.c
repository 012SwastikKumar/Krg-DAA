#include <stdio.h>

int main()
{
    int arr[] = {7,12,14,19,13}, sum=19;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int dp[n+1][sum+1];
    
    for(int i=0 ; i<=n ; i++){
        dp[i][0] = 1;
    }
    for(int i=0 ; i<=sum ; i++){
        dp[0][i] = 0;
    }
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=sum ; j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    printf("%d",dp[n][sum]);

    return 0;
}
