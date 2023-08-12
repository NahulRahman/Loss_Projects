
#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);
    k = i;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", (k%2));

        }

        printf("\n");
    }

    return 0;
}
