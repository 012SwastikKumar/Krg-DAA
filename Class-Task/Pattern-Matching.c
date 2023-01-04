#include <stdio.h>
#include <string.h>

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
    char str[] = "Swastik", pat [] = "was";
    
    int n = sizeof(str)/sizeof(str[0]) - 1; // as it includes the terminating charachter also which is '\0';
    int m = sizeof(pat)/sizeof(pat[0]) - 1; // as it includes the terminating charachter also which is '\0';
    // printf("%d",n);
    int a=0;
    for(int i=0 ; i<n ; ){
        if(pat[a]==str[i]){
            a=0;
            while(a<m && i<n && pat[a]==str[i]){
                i++;
                a++;
            }
            if(a==m){printf("Yes Found");}
        }else{
            i++;
        }
    }
    

    return 0;
}
