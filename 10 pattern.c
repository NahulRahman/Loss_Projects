#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    printf("1 0000");
    for(i=1;i<=n-2;i++){
        printf("1 0  0\n");
    }printf("1 0000");
    return 0;
}
