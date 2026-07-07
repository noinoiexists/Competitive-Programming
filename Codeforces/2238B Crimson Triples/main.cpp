#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long ans = 0;

        cin >> n;

        for (int i = 1; i <= n; i++) {
            long long x = n / i;
            ans += x * x;
        }

        cout << ans << endl;
    }

    return 0;
}
