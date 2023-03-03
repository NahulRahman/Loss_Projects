/* Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
        i/p: happy,NewYear,enjoy
        o/p: HAPPY nEWyEAR ENJOY */#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>
#define MAX 10000
int main() {
    char S[MAX];
    gets(S);
    // Replace commas with spaces
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == ',') S[i] = ' ';
        if (isupper(S[i])) S[i] = tolower(S[i]);
        else if (islower(S[i])) S[i] = toupper(S[i]);
    }// Print the modified string S
    printf("%s\n", S);
    return 0;
}

