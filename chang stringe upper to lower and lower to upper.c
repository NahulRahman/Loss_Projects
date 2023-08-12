#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char ch[max];
    gets(ch);
    strupr(ch);
    strlwr(ch);
    printf("%s",ch);
    return 0;
}
