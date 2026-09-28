#include <stdio.h>

int main() {
    int vector[5];
    int i;
    int suma = 0;
    float promedio;

 
    printf("Ingrese 5 numeros:\n");
    for(i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
        suma += vector[i];
    }

   
    promedio = (float)suma / 5;

    // Mostrar resultados
    printf("\nSuma de los elementos: %d\n", suma);
    printf("Promedio de los elementos: %.2f\n", promedio);

    return 0;
}