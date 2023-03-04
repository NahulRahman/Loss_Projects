#include<stdio.h>
int main(){
    char X;
    scanf("%c",&X);
    if(X>='a'&&X<='a') X=X-32;
    else if(X>='A'&&X<='Z') X=X+32;
    printf("%c\n",X);
    return 0;
}
