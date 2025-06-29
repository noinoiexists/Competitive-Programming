#include <stdio.h>

int main() {
	int n, count=0;
	scanf("%d", &n);
	for (int i=0; i<n; ++i){
		int p1, p2, p3;
		scanf("%d %d %d", &p1, &p2, &p3);
		switch(p1+p2+p3) {
			case 0:
			case 1:
				break;
			case 2:
			case 3:
				count++;
				break;
		}
	}
	printf("%d", count);
	return 0;
}