#include <inttypes.h>
#include <stdio.h>

int main(){
    uint8_t t;
    scanf("%" SCNu8, &t);
    while(t--){
        uint8_t n, counter=0, sum=0;
        scanf("\n%"SCNu8 "\n", &n);
        while(n--){
            char c;
            scanf("%c", &c);
            if(counter == 3)
                continue;
            if(c == '.')
                ++counter;
            if (counter == 3){
                sum = 2;
                continue;
            }
            if(c == '#' || n==0) {
                sum += counter;
                counter = 0;
            }
        }
        printf("%"PRIu8 "\n", sum);
    }
    return 0;
}
