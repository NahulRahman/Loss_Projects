#include<stdio.h>
#include<string.h>
int main(){
    int i,j,l;
    char temp;
    char s[1000];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++){
        for(j=0;j<l-i-1;j++){
            if(s[j]!='+'){
                    if(s[j]>s[j+2]){
                        temp=s[j];
                        s[j]=s[j+2];
                        s[j+2]=temp;
                    }
            }
        }
    }
    puts(s);
    return 0;
}
