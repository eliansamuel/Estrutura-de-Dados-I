#include <stdio.h>

int main() {
    
    int soma, contador, volta;
    int x, y;
    
    while(scanf("%d %d", &x, &y) == 2) {
    
    soma = 0;
    
    if (x > y) {
        volta = x;
        x = y;
        y = volta;
    }
    
    if (x % 2 != 0){
        for(contador = x + 2; contador < y; contador++) {
            if (contador % 2 != 0)
                soma += contador;
            
        }
    }
    
    else {
        for(contador = x + 1; contador < y; contador++) {
            if ( contador % 2 != 0)
                soma += contador;
        }
    
    }

    printf("%d\n", soma);
    
    }
    
    return 0;
    
}
