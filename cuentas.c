/*
 * Actividad 2.2: Repartir cuentas entre amigos
 * ELO320 - Estructuras de Datos y Algoritmos
 *
 * Instrucciones:
 *   Completa las funciones marcadas con TODO para que el programa
 *   calcule cuánto debe pagar cada amigo y quién le debe dinero a quién.
 */

#include <stdio.h>
#include <string.h>

#define MAX_AMIGOS 10
#define MAX_NOMBRE 50

/* =========================================================
 *  Definición de estructuras
 * ========================================================= */

typedef struct {
    char nombre[MAX_NOMBRE];
    float gasto;
} Amigo;

/* =========================================================
 *  Prototipos (firmas) de funciones
 * ========================================================= */

/**
 * Lee los datos de n amigos desde teclado y los almacena en el arreglo.
 * @param amigos  Arreglo donde se guardarán los amigos.
 * @param n       Cantidad de amigos a leer.
 */
void leer_amigos(Amigo amigos[], int n);

/**
 * Calcula el gasto total de todos los amigos.
 * @param amigos  Arreglo de amigos.
 * @param n       Cantidad de amigos.
 * @return        Suma de todos los gastos.
 */
float calcular_total(Amigo amigos[], int n);



/* =========================================================
 *  Función principal
 * ========================================================= */

int main() {
    Amigo amigos[MAX_AMIGOS];
    int n;

    printf("¿Cuántos amigos participaron? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_AMIGOS) {
        printf("Número de amigos inválido.\n");
        return 1;
    }

    leer_amigos(amigos, n);

    float total   = calcular_total(amigos, n);
    /**TODO: Completa la función calcular_total*/
   
    printf("Gasto total:   $%.2f\n", total);

    /**TODO: Según el algoritmo que quieran implementar, definan las funciones necesarias para dividir los gastos**/

    return 0;
}

/* =========================================================
 *  Implementación de funciones
 * ========================================================= */

void leer_amigos(Amigo amigos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nombre del amigo %d: ", i + 1);
        scanf("%49s", amigos[i].nombre);
        printf("Gasto de %s: $", amigos[i].nombre);
        scanf("%f", &amigos[i].gasto);
    }
}

float calcular_total(Amigo amigos[], int n) {
    /* TODO: Recorre el arreglo y suma todos los gastos. */
    return 0.0f;
}

