#include <stdio.h>
#include <math.h>

void ley_de_ohm() {
    float V, I, R;
    int opcion;

    printf("\n-- Ley de Ohm --\n");
    printf("1. Calcular Voltaje (V = I * R)\n");
    printf("2. Calcular Corriente (I = V / R)\n");
    printf("3. Calcular Resistencia (R = V / I)\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la corriente (I): ");
            scanf("%f", &I);
            printf("Ingrese la resistencia (R): ");
            scanf("%f", &R);
            V = I * R;
            printf("Voltaje = %.2f V\n", V);
            break;
        case 2:
            printf("Ingrese el voltaje (V): ");
            scanf("%f", &V);
            printf("Ingrese la resistencia (R): ");
            scanf("%f", &R);
            I = V / R;
            printf("Corriente = %.2f A\n", I);
            break;
        case 3:
            printf("Ingrese el voltaje (V): ");
            scanf("%f", &V);
            printf("Ingrese la corriente (I): ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistencia = %.2f ohmios\n", R);
            break;
        default:
            printf("Opcion invalida.\n");
    }
}

void factor_potencia() {
    float P, S, FP;

    printf("\n-- Calculo del Factor de Potencia --\n");
    printf("Ingrese la potencia activa (P en W): ");
    scanf("%f", &P);
    printf("Ingrese la potencia aparente (S en VA): ");
    scanf("%f", &S);

    if (S != 0) {
        FP = P / S;
        printf("Factor de Potencia = %.2f\n", FP);
    } else {
        printf("Error: la potencia aparente no puede ser cero.\n");
    }
}

void resistencia_conductor() {
    float rho, L, A, R;

    printf("\n-- Resistencia de un Conductor --\n");
    printf("Ingrese la resistividad del material (ohm*m): ");
    scanf("%f", &rho);
    printf("Ingrese la longitud del conductor (m): ");
    scanf("%f", &L);
    printf("Ingrese el area de la seccion transversal (m^2): ");
    scanf("%f", &A);

    if (A != 0) {
        R = rho * L / A;
        printf("Resistencia del conductor = %.6f ohmios\n", R);
    } else {
        printf("Error: el area no puede ser cero.\n");
    }
}

void resistencia_led() {
    float V_fuente, V_led, I_led, R;

    printf("\n-- Calculo de Resistencia para LED --\n");
    printf("Ingrese el voltaje de la fuente (V): ");
    scanf("%f", &V_fuente);
    printf("Ingrese la caida de voltaje del LED (V): ");
    scanf("%f", &V_led);
    printf("Ingrese la corriente del LED (A): ");
    scanf("%f", &I_led);

    if (I_led != 0) {
        R = (V_fuente - V_led) / I_led;
        printf("Resistencia necesaria = %.2f ohmios\n", R);
    } else {
        printf("Error: la corriente no puede ser cero.\n");
    }
}

int main() {
    int opcion;

    do {
        printf("\n--- CALCULADORA DE INGENIERIA ELECTRICA ---\n");
        printf("1. Ley de Ohm\n");
        printf("2. Calculo del Factor de Potencia\n");
        printf("3. Resistencia de un Conductor\n");
        printf("4. Resistencia para LED\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: ley_de_ohm(); break;
            case 2: factor_potencia(); break;
            case 3: resistencia_conductor(); break;
            case 4: resistencia_led(); break;
            case 5: printf("Saliendo...\n"); break;
            default: printf("Opcion invalida.\n");
        }
    } while(opcion != 5);

    return 0;
}
