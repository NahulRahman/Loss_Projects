#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='A'&&x<='B') printf("ALPHA\nIS CAPITAL\n");
    else if(x>='a'&&x<='z') printf("ALPHA\nIS SMALL\n");
    else if(x>='0'&&x<='9') printf("IS DIGIT\n");
    return 0;
}
