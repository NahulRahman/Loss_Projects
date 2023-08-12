#include<stdio.h>
#include<math.h>
int main(){
    long long int i,n;
    int sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        sum=sum+(i*pow(-1,i));
    }printf("%d",sum);
    return 0;
}
