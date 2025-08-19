#include <stdio.h>
#include <inttypes.h>

#define MIN(x,y) (((x)<(y))?x:y)

int main() {
	int16_t t ,n;
	int32_t a, b, x;
	int64_t time;
	scanf("%"SCNd16, &t);
	for (int i=0; i<t; ++i){
		time=0; 
		scanf("%"SCNd32 "%"SCNd32 "%"SCNd16, &a, &b, &n);
		for (int j=0; j<n; ++j){
			scanf("%"SCNd32, &x);
			time += MIN(x,a-1);
		}
		time += b;
		printf("%"PRId64 "\n", time);
	}
	return 0;
}