#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 0, nextTerm, limit;

    printf("Entrez le premier terme de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    if (n % 3 == 0) {
        printf("%d est un multiple de 3.\n", n);
    } else {
        printf("%d n'est pas un multiple de 3.\n", n);
    }

    printf("Entrez le nombre limite : ");
    scanf("%d", &limit);

    printf("Suite de Fibonacci : %d, %d, ", n, n);

    t2 = n;

    while (n + t2 <= limit) {
        nextTerm = n + t2;
        printf("%d, ", nextTerm);
        n = t2;
        t2 = nextTerm;
    }

    return 0;
}










