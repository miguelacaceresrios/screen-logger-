#include <stdio.h>

// Declarar función de ensamblador
extern void capture_screen();

int main() {
    printf("Iniciando la captura de pantalla...\n");
    capture_screen(); // Llamada a la función en Assembly
    printf("Captura de pantalla completada.\n");
    return 0;
}
