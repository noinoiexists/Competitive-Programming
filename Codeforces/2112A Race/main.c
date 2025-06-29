#include <stdio.h>
#include <math.h>

int main() {
	int t, a, x, y;
	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		scanf("%d%d%d", &a, &x, &y);
		if ( !((x<a && y>a) || (x>a && y<a) ) && (a != x) && (a != y) )
			printf("YES\n");
		else
			printf("NO\n");
	}
}