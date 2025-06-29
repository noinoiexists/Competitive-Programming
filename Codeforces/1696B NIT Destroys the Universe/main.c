#include <stdio.h>

int main() {
	int t;
	long int n; 
	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		scanf("%ld", &n);
		long long int a[n];
		for(int j=0; j<n; ++j){
			scanf("%lld", &a[j]);
		}

		long int count=0;
		if(a[0] != 0) ++count;
		for(int j=1; j<n; ++j){
			if(a[j-1] == 0) {

				if(a[j] == 0)
					continue;
				else 
					++count;
			}
		}
		printf("%ld\n", (count>2)? 2: count);
	}
}