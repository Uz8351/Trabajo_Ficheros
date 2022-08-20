#include "Variables.h"
int main() {
        
        FILE * Descriptor_Archivo;
      

        printf("--------------------------------------\n");
        printf("Dirección Inicio Buffer: [%p] \n",&Descriptor_Archivo );
        printf("--------------------------------------\n");
        printf("\n");
        char Almaceno[] = "HOMO HOMINI LUPUS $";
        Descriptor_Archivo = fopen("MiFichero.txt", "w"); // "w" defines "writing mode"
//********************************************************

    for (i = 0; Almaceno[i] != '$'; i++) {
            /* write to file using fputc() function */
            fputc(Almaceno[i], Descriptor_Archivo);
            printf("Direccion [%p] caracter[%c] \n",&Almaceno[i],Almaceno[i] );

             /*
             include <stdio.h>
             La función de biblioteca C int "fputc(int char, FILE *stream)",
             escribe un carácter (un carácter sin signo) especificado por 
             el argumento char en la secuencia especificada y avanza el
             indicador de posición de la secuencia.

             */

}
        
printf("\n");
for (i = 0; i < 123; ++i) {
        printf("%02X ", ((unsigned char*)Descriptor_Archivo)[i]);
        if (((unsigned char*)&Descriptor_Archivo)[i] >= ' ' && ((unsigned char*)&Descriptor_Archivo)[i] <= '~')
         {
            Codigo_ascii[i % 16] = ((unsigned char*)&Descriptor_Archivo)[i];
        } else {
            Codigo_ascii[i % 16] = '.';
        }
        if ((i+1) % 8 == 0 || i+1==123) {
            printf(" ");
            if ((i+1) % 16 == 0) {
                printf(" |  %s \n", Codigo_ascii);
 }
            }
            }
            fclose(Descriptor_Archivo);
            printf("\n");


//***************************************************
printf("\n");

long int pid;
pid=getpid();
/*
getpid() devuelve el ID de proceso (PID) del proceso de llamada.
*/


printf("\n");
printf( " PID asignado por el kernel:%ld\n",pid);
 
printf ("Llamada (pmap  -d) a system.\n");
sprintf (comando, "pmap  -d %ld", pid);
salida = system (comando);
printf("---------------------------------------------\n"); 
printf("Bloque de Intercambio e Inode del ejecutable.\n");
printf("---------------------------------------------\n"); 
printf ("Llamada (pmap  -d) a system.\n");
sprintf (comando1, "stat ./Descriptor_Archivo");
salida1 = system (comando1);

/*
#include <stdlib.h>
La función de biblioteca C "int system(const char *command)",
pasa el nombre del comando, o el nombre del programa especificado
por el comando al entorno host, para que lo ejecute el procesador
de comandos y regresa después de que se haya completado el comando.

*/
        
        return 0;

}











