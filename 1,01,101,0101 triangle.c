/*#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            k=i;
        for(j=1;j<=i;j++,k++){
            printf("%d",k%2);
        }printf("\n");
    }return 0;

}*/

/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        k=1;
        for(j=i;j<=n;j++,k++){
            if(k%2==0){
                printf("B ");
            }else{
                printf("A ");
            }
        }printf("\n");
    }return 0;
}*/


/*#include <stdio.h>
void main()
{
      int i,j,n;
      scanf("%d",&n);
      for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1||j==i||i==n){
                printf("%d",j);
            }else{
                printf("*");
            }
        }printf("\n");
      }
}*/



#include<stdio.h>
int main(){
    int n,i;
    scanf("%d"&n);
    for(i=0;i<=n;i++){
        printf("%c",a);
        printf("\n");
    }printf("%c",x);
    return 0;
}
