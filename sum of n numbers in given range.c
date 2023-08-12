//sum of n numbers in given range
#include<stdio.h>
int main(){
    int i,a,n,sum=0;
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}

