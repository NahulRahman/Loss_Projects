#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char ch[max];
    gets(ch);
    printf("%s",strlwr(ch));
    return 0;
}
