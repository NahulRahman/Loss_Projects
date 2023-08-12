#include<stdio.h>
#include<string.h>
int main(){
    int u=0,l=0;
    char s[100];
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            l++;
        else
            u++;
    }
    if(u>l)
        printf("%s",strupr(s));
    else if(u<l||u==l)
        printf("%s",strlwr(s));
    return 0;
}
