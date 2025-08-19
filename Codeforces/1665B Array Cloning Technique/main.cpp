#include <stdio.h>
#include <stdint.h>
#include <bits/stdc++.h>

int main() {
	int t, n;
	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		scanf("%d", &n);
		int32_t a;
		std::map<int32_t, int> m;
		for(int j=0; j<n; ++j) {
			scanf("%d", &a);
			++m[a];
		}
		int max_freq=0;
		for (auto j=m.begin(); j != m.end(); ++j)
			if((*j).second > max_freq)
				max_freq = (*j).second;

		int k=0;
		for(int32_t z=max_freq; z < n; ++k)
			z *= 2;
		printf("%d\n", k+n-max_freq);
	}
	return 0;

}

