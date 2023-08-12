#include<stdio.h>
#include<string.h>
int main(){
    int flag=0,i,j;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;j<i+7;j++){
            if(s[i]==s[j]){
                flag=1;
            }else{
                flag=0;
                break;
            }
        }if(flag==1)
        break;
    }if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
