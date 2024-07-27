#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;

    printf("Os cinco primeiros multiplos de 2 e 3 simultaneamente sao:\n");

    while (count < 5) {
        if (num % 2 == 0 && num % 3 == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
