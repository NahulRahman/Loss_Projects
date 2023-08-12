#include<stdio.h>
int main(){
    long long n;
    int a=0;
    scanf("%lld",&n);
    while(n!=0){
        if(n%4==0&&n%7==0)
        a++;
        n=n/10;
    }
    if(a==7||a==4)
        printf("YES");
    else
        printf("NO");
    return 0;
}
