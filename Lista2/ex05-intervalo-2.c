#include <stdio.h>

int main() {
    
    int n, x, in, out, quantidade, comparar;
    
    scanf("%d", &quantidade);
    
    in = 0;
    out = 0;
    
    for(comparar = 0; comparar < quantidade; comparar += 1){
        scanf("%d", &n);
        if ((n >= 10) && (n <= 20)){
            in += 1;
        }
        else{
            out += 1;
        }
    }
    
    printf("%d in\n%d out\n", in, out);
    
    return 0;    
}
