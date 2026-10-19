
#include <stdio.h>

int main() {
    int vector[5];
    int opcion, posicion, i;

    for (i = 0; i < 5; i++) {
        printf("Ingrese un valor: ");
        scanf("%d", &vector[i]);
    }

    do {
        printf("\n1. Consultar un valor");
        printf("\n2. Modificar un valor");
        printf("\n3. Imprimir el vector");
        printf("\n4. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese la posicion (0 a 4): ");
                scanf("%d", &posicion);

                if (posicion >= 0 && posicion < 5) {
                    printf("Valor: %d\n", vector[posicion]);
                } else {
                    printf("Posicion incorrecta\n");
                }
                break;

            case 2:
                printf("Ingrese la posicion a modificar (0 a 4): ");
                scanf("%d", &posicion);

                if (posicion >= 0 && posicion < 5) {
                    printf("Ingrese el nuevo valor: ");
                    scanf("%d", &vector[posicion]);
                } else {
                    printf("Posicion incorrecta\n");
                }
                break;

            case 3:
                for (i = 0; i < 5; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Fin del programa\n");
                break;

            default:
                printf("Opcion incorrecta\n");
        }

    } while (opcion != 4);

    return 0;
}
