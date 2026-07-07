#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

int main(){
    uint16_t t;
    scanf("%"SCNu16, &t);
    while(t--){
        uint32_t n, m, i, j;
        scanf("%"SCNu32 "%"SCNu32 "%"SCNu32 "%"SCNu32, &n, &m, &i, &j);
        printf("1 1 %"PRIu32 " %"PRIu32 "\n", n, m);
    }
    return 0;
}
