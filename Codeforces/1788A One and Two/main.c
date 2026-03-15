#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t t;
    uint16_t n;
    scanf("%"SCNu8, &t);
    while(t--){
        scanf("%"SCNu16, &n);
        uint16_t twos=0, pos[1000] = {0};
        for(uint16_t i=0; i<n; ++i){
            uint8_t num;
            scanf("%"SCNu8, &num);
            if(num == 2){
                ++twos;
                pos[twos-1] = i+1;
            }
        }
        if(twos%2 != 0){
            printf("-1\n");
            continue;
        }
        if(twos == 0){
            printf("1\n");
            continue;
        }
        printf("%"PRIu16 "\n", pos[twos/2 -1]);
    }
    return 0;
}
