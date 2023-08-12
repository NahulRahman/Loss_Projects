#include<stdio.h>
int main(){
    int i,n,k,next=0,a[50];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        if((a[i]>=a[k-1])&&(a[i]>0)){
            next++;
        }
    }printf("%d",next);
    return 0;
}
