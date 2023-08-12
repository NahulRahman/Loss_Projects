#include<stdio.h>
#include<string.h>
#define a 101
int main(){
    char s[a],t[a];
    gets(s);
    gets(t);
    if(strcmp(s,strrev(t))==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
