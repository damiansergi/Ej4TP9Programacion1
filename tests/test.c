/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   test.c
 * Author: grupo1
 *
 * Created on 15 de octubre de 2020, 19:55
 */

#include <stdio.h>
#include <stdlib.h>
#include "verPalindromo.h"

/*
 * Simple C Test Suite
 */

int main(void) {
    
    char cadena1[]= "Menem";
    char cadena2[]= "Amigo no gima";
    char cadena3[]= "Anita, la gorda lagartona, no traga la droga latina";
    char cadena4[]= "A man, a plan, a canal, Panama";
      
    printf("Las siguientes 4 cadenas son palindromos\n");
    
    printf("Cadena 1: %s\n", cadena1);
    verPalindromo(cadena1);
    printf("Cadena 2: %s\n", cadena2);
    verPalindromo(cadena2);
    printf("Cadena 3: %s\n", cadena3);
    verPalindromo(cadena3);
    printf("Cadena 4: %s\n", cadena4);
    verPalindromo(cadena4);
    
    /* ***************************************************************************************************************** */
    
    char cadena5[]= "menem NOOOOO";
    char cadena6[]= "Esto claramente no es un palindromo";
    char cadena7[]= "aaaiiaaao";
    char cadena8[]= "oaaaiiaaa";
      
    printf("Las siguientes 4 cadenas NO son palindromos\n");
    
    printf("Cadena 5: %s\n", cadena5);
    verPalindromo(cadena5);
    printf("Cadena 6: %s\n", cadena6);
    verPalindromo(cadena6);
    printf("Cadena 7: %s\n", cadena7);
    verPalindromo(cadena7);
    printf("Cadena 8: %s\n", cadena8);
    verPalindromo(cadena8);
    
    /* ***************************************************************************************************************** */
    
    char cadena9[]= "babamenem a,:      ,.b a b        .";
    char cadena10[]= "AMIGO, , no/  g!im!a ";
    char cadena11[]= "aaaiiaaao           ";
    char cadena12[]= "         oaaaiiaaa";
      
    printf("Las siguientes 4 cadenas tienen espacios o signos de puntuacion excesivos. Las 2 primeras son palindromos, el resto no\n");
    
    printf("Cadena 9: %s\n", cadena9);
    verPalindromo(cadena9);
    printf("Cadena 10: %s\n", cadena10);
    verPalindromo(cadena10);
    printf("Cadena 11: %s\n", cadena11);
    verPalindromo(cadena11);
    printf("Cadena 12: %s\n", cadena12);
    verPalindromo(cadena12);

    
    return (EXIT_SUCCESS);
}
