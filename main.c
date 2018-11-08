/*
 * Este programa se basa en vender boletos para el evento de mr. g
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * fecha: 7 noviembre del 2017
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int
main (void)
{	//VARIABLES
    int i;
    int a;
    int f;
    int tickets;
    int VIPmultiply;
    //Inicio del programa donde pido informacion.
    printf ("\t\tMr. G\t\t\n");
    printf("Este es un evento unico de una noche. A continuacion la informacion: \n");
    printf("Mr. G = Artistas: Jimmy Page, Blondie, Robert Plant, Knopfler, Ringo Starr, Roger Waters, etcetera\n");
    printf("Hay 400 asientos: 100 en el centro, 50 en las esquinas\n");
    printf("Escoge el asiento que gustes. Se dividen en: \n VIP ($100) - 1, \n Gold ($70) - 2, \n Silver ($55)- 3, \n Green ($45) - 4, \n Yellow ($40) - 5, \n Red ($30) - 6, \n Sky Blue ($50) -7, \n Navy Blue ($35) - 8 and \n Deep Blue ($20) - 9\n");
    printf("Si desea, por ejemplo 2 VIP y 3 Gold, comprarlos de manera separada. Es decir hacer la primera compra para VIP y una segunda para Gold\n");
    printf("Eliga uno\n");
    scanf ("%i", &f);
    //OPERACIONES PARA EL USUARIO
    if (f == 1){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 100;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 2){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 70;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 3){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 55;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 4){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 45;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 5){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 40;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 6){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 30;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 7){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 50;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 8){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 35;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
    if (f == 9){
        printf ("Cuantos boletos?: ");
        scanf ("%i", &tickets);
        VIPmultiply = tickets * 20;
        printf ("El precio a pagar es: %d\n", VIPmultiply);
    }
}