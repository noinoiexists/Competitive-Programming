#include <stdio.h>

int main() {
	long long int a, b, xk, yk, xq, yq;
	int count, t, limit;
	long long int x[16], y[16];
	scanf("%d", &t);
	for (int i=0; i<t; ++i){
		count=0;
		scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &xk, &yk, &xq, &yq);
        x[0]  = xq + b;   y[0]  = yq + a;
        x[1]  = xq + b;   y[1]  = yq - a;
        x[2]  = xq - b;   y[2]  = yq + a;
        x[3]  = xq - b;   y[3]  = yq - a;
        x[4]  = xq + a;   y[4]  = yq + b;
        x[5]  = xq + a;   y[5]  = yq - b;
        x[6]  = xq - a;   y[6]  = yq + b;
        x[7]  = xq - a;   y[7]  = yq - b;

        x[8]  = xk + b;   y[8]  = yk + a;
        x[9]  = xk + b;   y[9]  = yk - a;
        x[10] = xk - b;   y[10] = yk + a;
        x[11] = xk - b;   y[11] = yk - a;
        x[12] = xk + a;   y[12] = yk + b;
        x[13] = xk + a;   y[13] = yk - b;
        x[14] = xk - a;   y[14] = yk + b;
        x[15] = xk - a;   y[15] = yk - b;
        
        limit = (a==b)? 4 : 8;
		for(int j=0; j<limit; ++j){
			for(int k=8; k<(8+limit); ++k){
				if(x[j] == x[k] && y[j] == y[k]) {
					++count;		
				}
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}