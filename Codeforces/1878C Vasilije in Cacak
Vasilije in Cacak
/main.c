#include <stdio.h>

int main() {
	int t;
	long long int n, k, x;
	scanf("%d", &t);
	for (int i=0; i<t; ++i) {
		scanf("%lld%lld%lld", &n, &k, &x);
		if (k*(k+1)/2 <= (long double)x && (n*(n+1)-(n-k)*(n-k+1))/2 >= (long double)x)
			printf("YES\n");
		else
			printf("NO\n");
	}
}