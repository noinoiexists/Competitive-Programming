#include <stdio.h>

int main () {
	int n, k, score, limit=0, count=0;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &score);
		if (i+1 == k)
			limit= score;
		if (score >= limit && score>0)
			count++;
		else
			break;
	}
	printf("%d", count);
	return 0;
}