#include<stdio.h>
int main(){
int n,i,u=0,x,y,z,sum;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d%d%d",&x,&y,&z);
    sum=x+y+z;
    if(sum>=2){
        u++;
    }
}printf("%d",u);
return 0;
}
