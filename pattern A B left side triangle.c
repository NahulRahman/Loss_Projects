#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        k=1;
        for(j=1;j<i;j++,k++){
            if(k%2==0){
                printf("B ");
            }else{
                printf("A ");
            }
        }printf("\n");
    }return 0;
}
