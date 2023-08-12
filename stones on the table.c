#include<stdio.h>
#include<string.h>
int main(){
    int a=0,n,i;
    scanf("%d",&n);
    char s[n];
    gets(s);
    for(i=0;i<n;i++){
        if(s[i-1]==s[i]){
            a++;
        }
    }printf("%d",a);
    return 0;
}
