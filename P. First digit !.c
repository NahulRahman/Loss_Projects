//firstDigit = (int)(n / pow(10,(int)log10(n))); digits = (int)log10(n);
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(((int)(n / pow(10,(int)log10(n))))%2==0) printf("EVEN");
    else printf("ODD");
}
