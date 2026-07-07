#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t t;
    scanf("%"SCNu16, &t);
    while(t--){
        uint32_t n, b, b_=0, i=0;
        scanf("%"SCNu32, &n);
        uint32_t a[2*n];
        for(uint32_t j=0; j<n; ++j){
            scanf("%"SCNu32, &b);
            a[i] = b;
            if (b < b_) {
                ++i;
                a[i] = b;
            }
            b_ = b;
            ++i;
        }
        printf("%"PRIu32 "\n", i);
        for (uint32_t k=0; k<i; ++k){
            printf("%"PRIu32 " ", a[k]);
        }
        printf("\n");
    }
    return 0;
}
