#include <stdio.h>

#define MAX_LONG_INT 2147483647

int main() {
    int t, n;
    long int a, soln;
    scanf("%d", &t);
    for (int i=0; i<t;++i){
        scanf("%d", &n);
        soln=MAX_LONG_INT;
        for (int j=0; j<n; ++j){
            scanf("%ld", &a);
            soln = (soln & a);
        }
        printf("%ld\n", soln);
    }
}
