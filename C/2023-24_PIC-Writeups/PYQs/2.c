#include <stdio.h>
#include <stdlib.h>

void factor(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void number(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    while (n != 0) {
        int digit = n % 10;
        printf("%d ", digit);
        n /= 10;
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Choice of user: ");
    scanf("%d", &m);
    switch (m) {
        case 1:
            factor(n);
            break;
        case 2:
            number(n);
            break;
        default:
            printf("You have to choose between 1 & 2\n");
            break;
    }
    return 0;
}
