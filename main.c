/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Grupo1
 *
 * Created on 15 de octubre de 2020, 18:32
 */

#include <stdio.h>
#include <stdlib.h>
#include "verPalindromo.h"

/*
 * 
 */
int main(void) {    //este main NO es el archivo de prueba
    
    char arr [] = "menem";
    
    verPalindromo(arr);

    return (EXIT_SUCCESS);
}

