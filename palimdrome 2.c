#include<stdio.h>
int main(){
    int n,r=0,num;
    scanf("%d",&n);
    num=n;
    while(n!=0){
        r=10*r+(n%10);
        n=n/10;
    }printf("%d\n",r);
    if(r==num) printf("YES\n");
    else printf("NO\n");
    return 0;
}

