#include<stdio.h>
int main()
{
    int n,u=0,i;
    scanf("%d",&n);
    for(i=n;i>1;i=i)
    {
        if(i%2==0)
        {
            i=i/2;
        }
        else
        {
            i=i+1;
        }
        u++;
    }
    printf("%d",u);
}
