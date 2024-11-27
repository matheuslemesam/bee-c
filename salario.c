#include <stdio.h>

int main() {
    int n, h;
    float v, prod;
    scanf("%d %d %f", &n, &h, &v);
    prod = h*v;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ /%.2f\n", prod);
    
    
    return 0;
}