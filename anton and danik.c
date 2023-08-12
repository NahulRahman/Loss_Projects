#include<stdio.h>
#include<string.h>
int main(){
    int i,d=0,a=0,n;
    scanf("%d",&n);
    char s[n];
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a<d)
        printf("Danik");
    else if(a>d)
        printf("Anton");
    else
        printf("Friendship");
    return 0;
}
