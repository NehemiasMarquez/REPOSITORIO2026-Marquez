#include <stdio.h>

#define MAX 100

int main() {
    int vector[MAX];
    int n, opcion, indice;

 
    printf("¿Cuantos elementos va a tener el vector? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Cantidad invalida.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para la posicion [%d]: ", i);
        scanf("%d", &vector[i]);
    }

   
    do {
        printf("\n--- MENU ---\n");
        printf("1. Consultar un valor del vector\n");
        printf("2. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese el indice que desea consultar (0 a %d): ", n - 1);
            scanf("%d", &indice);

            if (indice >= 0 && indice < n) {
                printf("El valor en la posicion [%d] es: %d\n", indice, vector[indice]);
            } else {
                printf("Indice fuera de rango.\n");
            }
        } else if (opcion == 2) {
            printf("Programa finalizado por el usuario.\n");
        } else {
            printf("Opcion invalida, intente de nuevo.\n");
        }

    } while (opcion != 2);

    return 0;
}
