#include <stdio.h>
 
int main() {
 
    double area;
    double n = 3.14159;
    double r;
    printf("Endereço da variavel area: %p\n", &area);
    printf("Endereço da variavel raio: %p\n", &r);
    printf("Endereço da variavel n:    %p\n", &n);
    
    scanf("%lf", &r);
    
    area = n * r * r;
    
    printf("A=%.4lf\n", area);
 
    return 0;
}