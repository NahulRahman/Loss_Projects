#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    char a[max];
    char temp[max];
    gets(a);
    strcpy(temp,a);
    strrev(a);
    if(strcpy(temp,a)==0){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}
