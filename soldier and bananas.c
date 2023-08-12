#include<stdio.h>
int main(){
    long long int k,w,n,total;
    scanf("%lld%lld%lld",&k,&w,&n);
    total=(w*(k+(w*k)))/2;
    if(total>n)
        printf("%lld",total-n);
    else
        printf("0");
    return 0;
}
