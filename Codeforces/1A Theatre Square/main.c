#include <stdio.h>

int main () {
    long long n, m, a, n1, n2;
    scanf("%lld %lld %lld", &n, &m, &a);
    n1 = (n + a - 1) / a;
    n2 = (m + a - 1) / a;
    printf("%lld\n", n1 * n2);
    return 0;
}