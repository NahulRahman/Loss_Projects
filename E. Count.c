/*Given a string S. Print the summation of its digits.
    i/p: 1234
    o/p: 10
*/

#include <stdio.h>
#include <string.h>
#define MAX 100000
int main() {
    char S[MAX];
    gets(S);
    int i, sum = 0;
    for (i = 0; S[i] != '\0'; i++) {
        if (S[i] >= '0' && S[i] <= '9') {
            sum += S[i] - '0';
        }
    }printf("%d\n", sum);
    return 0;
}
