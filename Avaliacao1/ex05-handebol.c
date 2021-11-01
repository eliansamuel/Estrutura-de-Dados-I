#include <stdio.h>

int main() {

    int contador_partida, contador_gols, partida, jogador, f = 0, soma = 0, x[100];

    scanf("%d %d", &partida, &jogador);

    for (contador_partida = 1; contador_partida <= partida; contador_partida++) {
        for (contador_gols = 1; contador_gols <= jogador; contador_gols++){
            scanf("%d", &x[contador_gols]);
            
            if (x[contador_gols] == 0){
                x[contador_gols] = 1;
            }
            else x[contador_gols] = 0;
            
            soma += x[contador_gols];
        }
        if (soma == 0){ 
            f += 1;
        }
        else soma = 0;
    }
    printf("%d\n", f);

    return 0;
}
