/*#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }for(j=2*i-2;j<(2*n-2);j++){
            printf(" ");
        }for(j=1;j<=1;j++){
            printf("*");
        }
    }printf("\n");
} */

#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
    int l,i;
    char ch[max],s1[max];
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l/2;i++){
        ch[i]=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch[i];
    }printf("%s",s1);
    return 0;
}
