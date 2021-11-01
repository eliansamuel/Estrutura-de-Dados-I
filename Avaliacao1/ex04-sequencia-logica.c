#include <stdio.h>

int main() {

    int d1, d2, d3, d4, d5, d6;

    scanf("%d", &d1);

    for (d2 = 1; d2 <= d1; d2++) {

        d3 = d2 * d2;

        d4 = d2 * d2 * d2;

        printf("%d %d %d\n", d2, d3, d4);

        d5 = d3 + 1;

        d6 = d4 + 1;

        printf("%d %d %d\n", d2, d5, d6);

    }
    returun 0;

}
