/*#include<stdio.h>
void main(){
    int i;
    int a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<=10;i++){
        printf("%d\n",a[i]);
    }
}
*/


#include<stdio.h>
void main(){
    int i,sum=0;
    float avg;
    int a[10];
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<=10;i++){
        sum=sum+a[i];
    }printf("%d\n",sum);
    avg=sum/10;
    printf("%f",avg);
}
