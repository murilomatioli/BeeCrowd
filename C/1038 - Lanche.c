#include <stdio.h>
 
int main() {
    float lanches[5][2], total;
    int quantidade, codigo, i;
    for(i = 0; i<5;i++){
        lanches[i][0] = i + 1;
    }
    lanches[0][1] = 4.00;
    lanches[1][1] = 4.50;
    lanches[2][1] = 5.00;
    lanches[3][1] = 2.00;
    lanches[4][1] = 1.50;
    
    scanf("%d %d", &codigo, &quantidade);
    total = lanches[codigo - 1][1] * quantidade;
    
    printf("Total: R$ %.2f\n", total);
    return 0;
}