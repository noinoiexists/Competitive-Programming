#include <stdio.h>	

int main () {
	int x=0, n;
	char str[4];
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%s", str);
		(str[1] == '+')? ++x : --x;
	}
	printf("%d", x);
}