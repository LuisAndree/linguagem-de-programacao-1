#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void goldbach_conjecture(int start, int end) {
    for (int n = start; n <= end; n += 2) {
        for (int i = 2; i <= n / 2; i++) {
            if (is_prime(i) && is_prime(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
}

int main() {
    int start = 700;
    int end = 1100;

    goldbach_conjecture(start, end);

    return 0;
}
