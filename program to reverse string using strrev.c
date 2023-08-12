#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char a[max];
    gets(a);
    printf("%s",strrev(a));
    return 0;
}
