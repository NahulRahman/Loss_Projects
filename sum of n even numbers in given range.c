//sum of n even numbers in given range
#include<stdio.h>
int main(){
    int i,a,n,sum=0;
    scanf("%d%d",&a,&n);
    if(a%2==0){
    for(i=a;i<=n;i++){
        sum=sum+i;
    }
        printf("%d",sum);
    }
        else{
            printf("%d is not even",a);
        }
        return 0;
}

