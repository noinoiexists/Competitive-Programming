#include <stdio.h>

int main() {
	int t, n;
	long long int a, sum, zeros;

	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		scanf("%d", &n);
		zeros=0; sum=0;
		for(int j=0; j<n; ++j){
			scanf("%lld", &a);
			if (a == 1)
				++sum;
			if(a == 0)
				++zeros;
		}
		if(zeros)
			sum *= (1LL << zeros);
		printf("%lld\n", sum);
	}
}