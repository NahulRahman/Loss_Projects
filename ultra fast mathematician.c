#include<stdio.h>
#include<string.h>
#define max 10000
int main(){
    char a[max],b[max];
    gets(a);
    gets(b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b[i])
            a[i]='0';
        else
            a[i]='1';
    }printf("%s",a);
    return 0;
}
