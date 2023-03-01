#include <stdio.h>
#define MAX_SIZE 100000
int main(){
    int arr[MAX_SIZE];
    int i,max,size;
    scanf("%d", &size);
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
        max = arr[0];
        if(arr[i] > max){
            max = arr[i];
    }
    }printf("%d", max);
    return 0;
}
