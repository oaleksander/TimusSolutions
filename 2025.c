#include <stdio.h>

int main() {
    int T, n, k;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &n, &k);
        int div = n / k;
        int mod = n % k;
        int remain = k - mod;
        printf("%d", (n - div) * remain * div / 2 + (n - div - 1) * (div + 1) * mod / 2);
    }
    return 0;
}
