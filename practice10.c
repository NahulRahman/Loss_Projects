#include<stdio.h>
int main(){
    int n,i,j,s=0,c=0;
    for(i=100;i<=999;i++){
        for(j=i;j!=0;j/=10)
        {
            s=s+j%10;
        }
        if(s==n)
        {
        printf("%d",i);
        printf("\n");
        c++;
        }
        s=0;
    }
    return 0;
}
