#include<stdio.h>
int main(){
    int i,n,pro=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        pro=pro*i;
    }printf("%d",pro);
    return 0;
}


