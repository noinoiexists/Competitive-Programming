#include <stdio.h>

int main(){
	int W;
	scanf("%d", &W);
	printf("%s", (W%2 == 0 && W != 2)?"YES":"NO");
}