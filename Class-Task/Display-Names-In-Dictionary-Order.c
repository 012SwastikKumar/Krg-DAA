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
    char ch[4][10] = {"swastik","kumar","shubham", "kumar"};
    
    int n = sizeof(ch)/sizeof(ch[0]);
    
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(strcmp(ch[i],ch[j])>0){
                char temp[100];
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    }
    
    for(int i=0 ; i<n ; i++){
        int len = ln(ch[i]);
        for(int j=0 ; j<len ; j++){
            printf("%c",ch[i][j]);
        }
        printf("\n");

    }

    return 0;
}
