#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char a[max],b[max];
    gets(a);
    gets(b);
    if(strcmp(a,b)==0){
        printf("same");
    }else{
        printf("not same");
    }return 0;
}
