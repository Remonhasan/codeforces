#include <stdio.h>

int main()
{
	int A[1000000] = {0};
	long long int T,N,max,i,j,k;
	scanf("%lld", &T);

	max = 0;

	for (i = 0; i < T; i++) {
		scanf("%lld", &N);
		A[N]++;

		if (N > max) {
			max = N;
		}
	}

	for (j = 0; j <= max; j++) {
		for (k = 0; k < A[j]; k++) {
			printf("%lld\n", j);
		}
	}

	return 0;
}
