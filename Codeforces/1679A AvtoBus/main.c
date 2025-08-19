#include <stdio.h>
#include <inttypes.h>

int main(){
	uint16_t t;
	scanf("%"SCNu16, &t);
	for(uint16_t i=0; i<t; ++i){
		uint64_t n; 
		uint64_t min=0, max=0;
		scanf("%"SCNu64, &n);

		if(n%2 != 0 || n==2){
			printf("-1\n");
		 	continue;
		}

		max = n/4;
		min = n/6;
		if(n%6)
			++min;

		printf("%"PRIu64 " %"PRIu64 "\n", min, max);
	}
	return 0;	
}