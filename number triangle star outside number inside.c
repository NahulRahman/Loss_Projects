/*#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i){
                printf("* ");
            }else{
                printf("%d ",j);
            }
        }printf("\n");
    }return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i||j%2!=0){
                printf("* ");
            }else{
                printf("%d ",j);
            }
        }printf("\n");
    }return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i||i%2!=0){
                printf("* ");
            }else{
                printf("%d ",j);
            }
        }printf("\n");
    }return 0;
}*/

#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            int k=1;
        for(j=1;j<=i;j++,k++){
            if(k%2==0){
                printf("B ");
            }else{
                printf("A ");
            }
        }printf("\n");
    }return 0;
}




