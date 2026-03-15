#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int main() {
    uint8_t t;
    scanf("%"SCNu8, &t);
    while(t--){
        uint32_t n=0, k=0;
        scanf("%"SCNu32 "%"SCNu32, &n, &k);
        uint64_t nk = n*k;
        uint32_t * a = calloc(nk, sizeof(uint32_t));
        for(uint32_t i=0; i<nk; ++i){
            scanf("%"SCNu32, &a[i]);
        }

        uint32_t N = n - (n+1)/2 + 1;
        uint64_t sum=0;
        for(uint32_t i=1; i<=k; ++i){
            sum += a[nk - i*N];
        }
        printf("%"PRIu64 "\n", sum);
    }
    return 0;
}
