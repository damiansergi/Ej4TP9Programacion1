/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   verPalindromo.c
 * Author: Grupo1
 *
 * Created on 15 de octubre de 2020, 18:32
 */

#include <stdio.h>
#include <stdlib.h>
#include "verPalindromo.h"

void limpioString(char frase []);
int esPalindromo (char *p1, char *p2);
void aMinuscula (char frase[]);

/*
 * 
 */


void verPalindromo(char frase []){
    
    aMinuscula(frase);
    
    limpioString(frase);
    
    char *p1 = frase; //Inicializo un puntero a la primer letra del arreglo luego de limpiarlo de espacios y signos de puntuacion
    
    char *p2 = p1;  //Inicializo un puntero a la ultima letra del arreglo 
    while (*p2 != '\0'){  
        
        p2++;
    }  
    p2--;
    
    if(esPalindromo(p1,p2) == 1){   //checkeo si la frase es un palindromo o no, luego imprimo en consecuencia
    
         printf("La frase es un palindromo\n");   
    }
    else{
        
        printf("La frase no es un palindromo\n");
    }
}

int esPalindromo (char *p1, char *p2){

	if ( (p1 == p2) || ( (p1-1) == p2) ){
	
		return 1;
	}
	else{
	
		if (*p1 == *p2){		
			return esPalindromo(p1+1, p2-1);
		}
		else{		
			return 0;
		}
	}
}

void limpioString(char frase []){
    
    char * lectura = frase;
    char * escritura = frase;
    
    while (*escritura != '\0') {    //siempre y cuando no llegue al terminador
        
        if( (*lectura <= 'a') || (*lectura >= 'z') ){   //si es que encuentro un espacio u cualquier otra cosa
            
            while( (*escritura > 0) && ((*escritura <= 'a') || (*escritura >= 'z')) ){    //me voy a mover al caracter mas cercano, siempre que no llegue al terminador
                
                escritura++;
            }
            
            *lectura = *escritura; //y lo voy a copiar directamente al lugar donde habia un espacio
            
            *escritura = ' '; //y pondre en el lugar del caracter que saque un espacio para luego corregirlo
            
            lectura++;
            escritura++;
        }
        else{
            
            lectura++;
            escritura++;
        }
    }
    
    *lectura = '\0';
}

void aMinuscula (char frase[]){
    
    int i = 0;
    
    while (frase[i] != '\0'){
        
        if ( (frase[i] >= 'A') && (frase[i] <= 'Z') ){
            
            frase[i] += ('a' - 'A');
        }
        
        i++;
    }
}