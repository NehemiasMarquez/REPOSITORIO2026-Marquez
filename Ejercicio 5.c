#include <stdio.h>

int sumaVector(int v[], int tam) {
    int suma = 0;
    int i;

    for(i = 0; i < tam; i++) {
        suma += v[i];
    }

    return suma;
}

int main() {
    int v[10];
    int i, j, aux;
    int suma;
    float promedio;

    // Cargar vector
    for(i = 0; i < 10; i++) {
        printf("Ingrese un numero que este entre el 1 y el 10: ");
        scanf("%d", &v[i]);
    }

    // Ordenar de mayor a menor
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // Mostrar vector ordenado
    printf("\nVector ordenado de mayor a menor:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    // Suma y promedio
    suma = sumaVector(v, 10);
    promedio = (float)suma / 10;

    printf("\n\nSuma: %d", suma);
    printf("\nPromedio: %.2f\n", promedio);

    return 0;
}