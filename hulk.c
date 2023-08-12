#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<n;i++){
            if(i%2==0)
                printf("I love that ");
            else
                printf("I hate that ");
        }if(n%2!=0)
            printf("I hate it ");
            else
                printf("I love it ");
    return 0;
}
