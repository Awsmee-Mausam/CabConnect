#include <stdio.h>
#include <conio.h>

int main() {
    int count = 0;
    char ch;

    printf("Enter 0s and 1s. Press 'q' to quit.\n");

    while (1) {
        ch = getch();
        if (ch == 'q') {
            break;
        } else if (ch == '0' || ch == '1') {
            count += (ch - '0');
        }
    }

    printf("Result: %d\n", count % 2 == 0 ? 1 : 0);

    return 0;
}
