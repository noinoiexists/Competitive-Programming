#include <stdio.h>
#include <inttypes.h>

#define MIN(x,y) (((x)<(y))?x:y)
#define MAX(x,y) (((x)>(y))?x:y)

int main() {
	uint16_t t, n, min, max, output1, output2, prev_a, a1, an, a;
	scanf("%"SCNu16, &t);
	for (int i=0; i<t; ++i){
		scanf("%"SCNu16, &n);
		min=1000; max=0;
		output1=0; output2=0;
		for (int j=0; j<n; ++j){
			scanf("%"SCNu16, &a);
			min = MIN(min, a);
			max = MAX(max, a);
			if (j==0)
				a1 = a;
			if(j==n-1)
				an = a;
			if(j>0)
				output2 = MAX(output2, MAX(prev_a,a)-MIN(prev_a,a));
			prev_a=a;
		}
		output1 = MAX(MAX(a1, an)-min, max-MIN(a1, an));
		printf("%"PRIu16 "\n", MAX(output1,output2));
	}

	return 0;
}