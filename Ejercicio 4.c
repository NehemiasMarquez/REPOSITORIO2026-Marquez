#include <stdio.h>

#define MAX 100

void compararVectores(int vec1[], int vec2[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nPosicion [%d] -> Vector1: %d | Vector2: %d\n", i, vec1[i], vec2[i]);

        if (vec1[i] > vec2[i]) {
            printf("El valor mayor es %d y pertenece al VECTOR 1\n", vec1[i]);
        } else if (vec2[i] > vec1[i]) {
            printf("El valor mayor es %d y pertenece al VECTOR 2\n", vec2[i]);
        } else {
            printf("Ambos valores son iguales (%d)\n", vec1[i]);
        }
    }
}

int main() {
    int vector1[MAX], vector2[MAX];
    int n;

   
    printf("¿Cuantos elementos van a tener los vectores? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Cantidad invalida.\n");
        return 1;
    }

  
    printf("\n--- Cargar VECTOR 1 ---\n");
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d", &vector1[i]);
    }

    
    printf("\n--- Cargar VECTOR 2 ---\n");
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d", &vector2[i]);
    }

  
    printf("\n--- COMPARACION ---\n");
    compararVectores(vector1, vector2, n);

    return 0;
}