#include <stdio.h>

int main()
{
    double area, n, raio;

    scanf("%lf.2", &raio);

    area = ((raio * raio) * 3.14159);
    
    printf("A=%.4f\n", area);

    return 0;
    
}
