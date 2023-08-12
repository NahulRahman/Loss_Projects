#include<stdio.h>
#include<string.h>
#define N 200
int main(){
    int i,l;
    char ch[N];
    gets(ch);
    l=strlen(ch);
    if(l>10){
        printf("%c",ch[0]);
        printf("%d",l-2);
        printf("%c\n",ch[l-1]);

    }else{
        printf("%s\n",ch);
    }
    return 0;
}
