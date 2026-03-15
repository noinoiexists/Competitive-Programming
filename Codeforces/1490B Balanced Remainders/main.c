#include <stdio.h>
#include <inttypes.h>

#define ABS(x) ((x)>0?(x):-(x))

int main(){
    uint16_t t;
    scanf("%"SCNu16, &t);
    for(uint16_t _ = 0; _<t; ++_){
        int32_t n, a, s=0, c[3] = {0};
        scanf("%"SCNd32, &n);
        for(int32_t i = 0; i<n; ++i){
            scanf("%"SCNu32, &a);
            if (a%3 == 0) ++c[0];
            if (a%3 == 1) ++c[1];
            if (a%3 == 2) ++c[2];
        }

        for (int8_t i = 0; i<3 ; ++i) {
            if (c[i] <= n/3) continue;

            int8_t j = 1, k=0;
            if (c[(i+1)%3] > n/3) j=-1;
            if (c[(i+2)%3] > n/3) k=-1;

            s += ABS(n - c[(i+k+1)%3] - 2*c[(i+j+1)%3]);
            break;
        }

        printf("%"PRIu32 "\n", s);
    }
    return 0;
}
