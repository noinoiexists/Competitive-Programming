#include <stdio.h>
#include <inttypes.h>
#include <math.h>

#define ABS(x) ((x)>0?(x):-(x))

int main(){
    uint16_t t;
    scanf("%"SCNu16, &t);
    for(uint16_t i=0; i<t; ++i){
        int64_t a, b;
        scanf("%"SCNd64 "%"SCNd64, &a, &b);
        if(a == b){
            printf("0 0\n");
            continue;
        }
        if(a>b){
            int64_t temp = a;
            a = b;
            b = temp;
        }
        printf("%"PRId64 " ", (b-a));

        int64_t n = ABS( round((long double)a/(long double)\
            (b-a)) * (b-a) - a);
        printf("%"PRId64 "\n", n);
    }
    return 0;
}
