#include <stdio.h>

int main() {
	int t, twos, threes, count;
	long int n;
	scanf("%d", &t);
	for(int i=0; i<t; ++i){
		scanf("%ld", &n);
		twos=0; threes=0, count=0;
		for(int j=0; ; ++j){
			if( n%3 != 0 && n%2 != 0 && n != 1){
				count=-1;
				break;
			}
			if (n==1) break;
			if (n%3==0) { ++threes; n /=3; }
			if (n%2==0) { ++twos; n /=2; }

		}
		if (count==0 && twos > threes)
			count=-1;
		if (count != -1) 
			count= 2*threes-twos;
		printf("%d\n", count);
	}
}