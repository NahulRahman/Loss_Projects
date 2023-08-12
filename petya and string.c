#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char a[100],b[100];
    gets(a);
    gets(b);
    strupr(a);
    strupr(b);
    printf("%d",strcmp(a,b));
    return 0;
}
