#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Ponto;

int main() {
    Ponto p1, p2;
    
    printf("Digite as coordenadas do ponto 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Digite as coordenadas do ponto 2 (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    double distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("A distancia entre os pontos é: %.2f\n", distancia);
    return 0;
}