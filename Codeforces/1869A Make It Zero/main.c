#include <inttypes.h>
#include <stdio.h>

int main(){
    uint8_t t;
    scanf("%"SCNu8, &t);
    while(t--){
        uint8_t n, a;
        scanf("%"SCNu8, &n);
        for(uint8_t i=0; i<n; ++i)
            scanf("%"SCNu8, &a);
        printf("2\n1 %"PRIu8 "\n1 %"PRIu8 "\n", n, n);
    }
    return 0;
}
