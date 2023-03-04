#include<stdio.h>
int main(){
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if(a>b){
     temp=a;
     a=b;
     b=temp;
    }if(a%b==0) printf("Multiples\n");
    else printf("No Multiples\n");
    return 0;
}
