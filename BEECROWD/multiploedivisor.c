#include <stdio.h>

int main() {
    int A, B, M, D;
    scanf("%d %d", &A, &B);

    M = A % B;
    D = B % A;

    if (M == 0) {
        printf("%d e multiplo de %d", A, B);
    } else if (D == 0) {
        printf("%d e divisor de %d", A, B);
    } else {
        printf("nem um nem outro");
    }

    return 0;
}