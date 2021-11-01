#include <stdio>

int main() {

    int quilometragem;
    float combustivel, percorrido;
    
    scanf("%d", & quilometragem);
    scanf("%f", & combustivel);
    
    percorrido = quilometragem / combustivel;
    
    printf("%.3f km/l\n", percorrido);
    
    return 0;
}
