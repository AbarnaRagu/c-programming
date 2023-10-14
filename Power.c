#include <stdio.h>
int main() {
    int base, exp;
    long double res = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        res *= base;
        --exp;
    }
    printf("Answer is %.0Lf", res);
    return 0;
}
