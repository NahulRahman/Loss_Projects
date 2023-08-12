#include <stdio.h>
int main() {
	int N, i, sval, pos;
    scanf("%d", &N);
	int A[N];
	for(i=0;i<N;i++) {
			scanf("%d", &A[i]);
	}
	sval = A[0];
	pos= 0;
	for(i=0;i<N;i++) {
		if(sval>A[i]) {
			sval=A[i];
			pos = i;
		}
	}
	printf("%d\n", sval);
	printf("%d\n", pos);
	return 0;
}
