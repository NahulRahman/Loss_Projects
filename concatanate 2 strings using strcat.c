#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char a[max],b[max];
    gets(a);
    gets(b);
    strcat(a,b);
    printf("%s\n",a);
    return 0;
}
