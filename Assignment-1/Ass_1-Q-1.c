#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b){            // swap
    char temp = *a;
    *a=*b;
    *b=temp;
}

int ln(char *s){                        // length
    int i=0,len=0;
    while(s[i]!='\0'){
        i++;
        len++;
    }
    return len;
}

char *cct(char *s, char *t){            // concat
    int n1 = ln(s);
    int n2 = ln(t);
    int j=0,i=0;
    
    char *ch;
    ch = (char *)malloc((n1+n2)*sizeof(char));
    
    while(s[i] != '\0'){
        ch[j++] = s[i++];
    }
    i=0;
    while(t[i] != '\0'){
        ch[j++] = t[i++];
    }
    return (char *)ch;
}

char *cpy(char *s, char *t){            // copy
    int n1 = ln(s);
    int n2 = ln(t);
    char *temp = (char *)malloc(n2*sizeof(char)+1);
    
    if(n2<=n1){
        int i=0;
        while(i<n2){
            temp[i] = t[i];
            i++;
        }
        temp[i] = '\0';
        s=temp;
    }else{
        int i=0;
        while(i<n2){
            temp[i] = t[i];
            i++;
        }
        temp[i] = '\0';
        s=temp;
    }
    
    return s;
}

void rev(char *s, int len){             // reverse
    int i=0 , j=len-1;
    while(i<j){
        swap((s+i),(s+j));
        i++;
        j--;
    }
}

int main()
{
    char s[100] = "asdkjhfg", t[100]="hjkl";
    
    int len = ln(s);
    printf("Length of String %s : %d",s,len);
    
    char *st = cct(s,t);
    printf("\nConcatination of '%s' and '%s' is : %s",s,t,st);
    
    char *scpy = cpy(s,t);
    printf("\nCopy of '%s' as s1 and '%s' as s2 is : %s",s,t,scpy);
    
    rev(s,len);
    printf("\nReverse of String : %s",s);
    
    return 0;
}

