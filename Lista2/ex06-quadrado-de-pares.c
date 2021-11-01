#include <stdio.h>

int main(){
    
    int n, contador, prod;
    
    scanf("%d", &n);
    
    for(contador = 1; contador <= n; ++contador){
        if (contador % 2 == 0){
    
        prod =(contador * contador);
        
        printf("%d^2 = %d\n", contador, prod);
        }
    }
    
    return 0;
}
