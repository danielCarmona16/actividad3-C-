#include <stdio.h>

#define TC_DOLAR_GTQ 7.75  //Tipo de cambio: 1 USD
#define TC_EURO_GTQ 8.48 // Tipo de cambio: 1 EURO
#define TC_EURO_DOLAR 0.92
int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dólares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dólares\n");
    printf("3. Convertir de Dólares a Euros\n");
    printf("4. Convertir de Euros a Quetzales\n");
    printf("5. Convertir de Quetzales a Euros\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en Dólares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 2:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        case 3: 
            printf("Ingrese la cantidad en Dólares: ");
            scanf("%f", &cantidad);
            printf("%.2f EURO equivale a %.2f USD\n", cantidad, cantidad * TC_EURO_DOLAR);
            break;
        case 4:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EURO equivale a %.2f DOLAR\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 5:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EURO\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
    }
    return 0;
}