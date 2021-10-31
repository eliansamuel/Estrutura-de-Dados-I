#include <stdio.h>

int main() {
    
    float a, b, c, media;
    scanf("%f", & a);
    scanf("%f", & b);
    scanf("%f", & c);

    media = ((a * 0.2) + (b * 0.3) + (c * 0.5));

    printf("%.1f", media);

    return 0;
}