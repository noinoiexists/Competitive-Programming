#include <stdio.h>
#include <inttypes.h>

#define ceil(a, b) (((a) / (b)) + (((a) % (b) != 0) ))


int main(){
    uint16_t t;
    scanf("%"SCNu16, &t);

    while(t--){
        uint64_t x, y, k, ans;
        scanf("%"SCNu64 "%"SCNu64 "%"SCNu64, &x, &y, &k);

        ans = ceil(k*(1+y)-1, x-1) + k;
        printf("%"PRIu64 "\n", ans);
    }
    return 0;
}
