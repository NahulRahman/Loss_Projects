#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d,&n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf("B");
            }else{
                printf("A");
            }
        }printf("\n");
    }return 0;
}

