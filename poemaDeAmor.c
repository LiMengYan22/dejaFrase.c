/* Meter frase por terminal y guardar en un fichero hasta el final: */


/* 1º Crear fichero gedit $ touch ficherson.txt */
#include <stdio.h>
#include <string.h>
int main() 
{
                 
/* declara fichero */
FILE* fich;
int n=100;
                       
/* declarar frase */
char f[n];            
  
  
/* maximo 60palabras o n ...para compararla con f */
fich = fopen("ficherson.txt","w"); 
                      
  
/* AQUI FICHEROS: se abre..y se cierra, (cual y que hace) */
do
                {
                printf("Escribe una Frase para Insertar en el Fichero o Finaliza:");
                scanf("%s",f);
                getchar(); 
  
                                           
/* espera el cursor y recoje arriba fich el valor*/
                if  (strcmp (f, "salir") !=0) 
                                               
                                            
/* escribe hasta salir que eso no, osea que escriba el fichero lo que pongas excepto salir que es para salir.......strcmp compara dos strings: el fich con "salir"  y  ... !=0 no son iguales asique sigue */
fprintf(fich, "%s", f);
                }
while (strcmp (f, "salir") !=0); 
fclose(fich);
return 0;
}


