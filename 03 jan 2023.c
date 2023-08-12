 /* #include<stdio.h>
void num(int low,int up){
    if(low>up) return;
    printf("%d ",low);
    num(low+1,up);
}
int main(){
    int low,up;
    scanf("%d %d",&low,&up);
    num(low,up);
    return 0;
} */

#include<stdio.h>
void num(int up,int low){
    if(up>low) return;
    printf("%d ",low);
    num(up-1, low);
}
int main(){
    int low,up;
    scanf("%d %d",&up,&low);
    num(up,low);
    return 0;
}
