#include <stdio.h>

int main() {
    int a, count = 0;

    while (scanf("%d", &a) && (a == 0 || a == 1)) {
        count += a;
    }

    printf("Parity : %d\n", count % 2 == 0 ? 1 : 0);

    return 0;
}
