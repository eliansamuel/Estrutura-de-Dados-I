#include <stdio.h>

int main()
{
    float area, n, raio;
    scanf("%f.2", &raio);
    area = ((raio * raio) * 3.14159);
    printf("A=%.4f\n", area);

    return 0;
    
}
