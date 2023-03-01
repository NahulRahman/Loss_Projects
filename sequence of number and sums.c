#include<stdio.h>
int main(){
    int start,end,temp,sum=0;
    scanf("%d%d",&start,&end);
    if(start>end){
        temp=start;
        start=end;
        end=temp;
    }for(int i=start;i<=end;i++){
        printf("%d ",i);
        sum=sum+i;
    }printf("sum =%d",sum);
    return 0;
}
