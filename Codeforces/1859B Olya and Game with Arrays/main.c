#include <stdio.h>
#include <inttypes.h>

#define MIN(x,y) ((x)<(y)?(x):(y))

int main(){
    uint16_t t;
    scanf("%"SCNu16, &t);
    while(t--){
        uint16_t n;
        scanf("%"SCNu16, &n);
        uint32_t min=UINT32_MAX,
        second_min=UINT32_MAX,
        global_min=UINT32_MAX,
        global_second_min=UINT32_MAX;
        uint64_t second_min_sum=0;
        while(n--){
            min = UINT32_MAX;
            second_min = UINT32_MAX;
            uint16_t m;
            scanf("%"SCNu16, &m);
            while(m--){
                uint32_t a;
                scanf("%"SCNu32, &a);
                if (a<=min){
                    second_min = min;
                    min = a;
                } else if (a<=second_min){
                    second_min = a;
                }
            }
            second_min_sum += second_min;
            global_min = MIN(min, global_min);
            global_second_min = MIN(second_min, global_second_min);
        }
        uint64_t beauty = second_min_sum - global_second_min + global_min;
        printf("%"PRIu64 "\n", beauty);
    }
    return 0;
}
