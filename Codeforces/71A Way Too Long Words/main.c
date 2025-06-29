#include <stdio.h>

int strLength(char *str) {
	int i=0;
	for (; i<=100; i++){
		if (str[i] == '\0')
			break;
	}
	return i;
}

int main () {
	char str[101];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%s", str);
		int len = strLength(str);
		if (len <=10 )
			printf("%s\n", str);
		else
			printf("%c%d%c\n", str[0], len-2, str[len-1]);
	}
	return 0;
}

