#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char a[max],b[max];
    gets(a);
    printf("a=%s\n",a);
    printf("%s\n",strcpy(b,a));
    printf("a=%s\n",a);
    printf("b=%s\n",b);
    return 0;
}
