#include <stdio.h>

int main() {
	int t, n, x;
	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		scanf("%d%d", &n, &x);
		long long int sum =0, max=0;
		int a;
		for(int j=0; j<n; ++j){
			scanf("%d", &a);
			sum += a;
			max += (a +x -1)/x;
		}
		printf("%lld %lld\n", (sum +x -1)/x, max);
	}
}