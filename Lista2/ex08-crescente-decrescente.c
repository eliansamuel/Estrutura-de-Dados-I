#include <stdio.h>

int main() {
    
    int n1, n2;
    
    do{
        scanf("%d %d", &n1, &n2);
        
        if (n1 < n2) printf("Crescente\n");
        
        else if (n1 > n2) printf("Decrescente\n");
    } 
    while (n1 != n2);
    
    return 0;
    
}
