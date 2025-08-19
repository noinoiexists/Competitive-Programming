#include <stdio.h>
#include <inttypes.h>

int main() {
	uint32_t t, n, k;
	int64_t odd;
	char a;
	scanf("%"SCNu32, &t);
	for (uint32_t i =0; i<t; ++i){
		scanf("%"SCNu32	"%"SCNu32, &n, &k);
		uint8_t count[26] = {0};
		odd = 0;
		for (uint32_t j=0; j<n; ++j){
			scanf(" %c", &a);
			++count[a-'a'];
		}
		for (uint8_t j=0; j<26; ++j)
			if(count[j]%2 != 0)
				++odd;
		if (k >= odd-1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}

