#include<stdio.h>
int main(){
    float x,y;
    scanf("%f%f",&x,&y);
    if(x>0&&y>0) printf("Q1\n");
    else if(x>0&&y<0) printf("Q4\n");
    else if(x<0&&y<0) printf("Q3\n");
    else printf("Q2\n");
    return 0;
}