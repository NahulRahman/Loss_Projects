/*#include <stdio.h>
int main()
{
  int array[100], size, c, location = 0;

  printf("Enter number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

      for(i = 0; i < AL; i++) {
		if(N[i] < MAX) {
			printf("A[%d] = %.1f\n", i, N[i]);
		}
	}

  printf("Minimum element is present at location %d and its value is %d.\n", location+1, array[location]);
  return 0;
} */

/*#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int A[MAX_SIZE];
    int N, i, toSearch, found;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &toSearch);
    found = 0;
    for(i=0; i<N; i++){
        if(A[i] == toSearch)
        {   found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int k,pos=-1;
    scanf("%d",&k);
    for(i=0;i<N;i++){
        if(A[i]==k){
            pos = i;
            printf("%d",i);
            break;
        }
    }
    if(pos==-1){
        printf("-1");
    }

    return 0;
} */

/* #include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int A[N];
	for(int i = 0;i<N;i++){
		scanf("%d", &A[i]);
	}for(int i = 0; i <N; i++){
		if(A[i] < 10){
			printf("A[%d] = %d\n", i, A[i]);
		}
	}return 0;
} */

/* #include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    int A[N],A1[N];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }for(i=0,j=N-i-1;i<N,j>=0;i++,j--){
         A1[j]=A[i];
    }for(i=0;i<N;i++){
        printf("%d ",A1[i]);
    }
} */

/* #include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }int temp = A[n-1];
    for(i=n-1;i>=1;i--){
        A[i]=A[i-1];
    }A[i]= temp;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
} */

#include<stdio.h>
int main(){
int N;
int arr[3 5 -7 7 5 -9 -4];
int answer[N];
int sum = 0;
for(int i = 0; i < N; i++) sum += arr[i];
int num = floor(sum / (double)N);
for(int i = 0; i < N; i++)
{
    if (sum == (N - i) * (num + 1)) answer[i] = num + 1;
    else answer[i] = num;
    sum -= answer[i];
} return 0;
}
