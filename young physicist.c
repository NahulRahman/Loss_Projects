#include<stdio.h>
int main(){
    int n,i,j,flag=0,sum=0;
    int a[i][3];
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
        scanf("%d",&a[i][3]);
    for(j=0;j<3;j++){
        for(i=0;i<n;i++){
            sum=sum+a[i][j];
        }
        if(sum==0)
            flag=1;
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
