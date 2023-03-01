#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = 0;
    int start = (x < y) ? x + 1 : y + 1;
    int end = (x < y) ? y : x;
    for (int i = start; i < end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n",sum);
    return 0;
}
