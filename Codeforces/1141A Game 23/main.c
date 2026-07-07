#include <stdio.h>
#include <inttypes.h>

int main(){
    uint32_t n,m,q;
    scanf("%"SCNu32 " %"SCNu32, &n, &m);
    uint32_t twos=0, threes=0;

    if(n == m){
        printf("0\n");
        return 0;
    }

    q = m/n;

    if( (q*n != m) || (q%2 != 0 && q%3 != 0)) {
        printf("-1\n");
        return 0;
    }

    while(q%2 == 0){
        ++twos;
        q /= 2;
    }

    while(q%3 == 0){
        ++threes;
        q /= 3;
    }

    if(q != 1){
        printf("-1\n");
        return 0;
    }

    printf("%"PRIu32 "\n", twos+threes);

    return 0;
}
