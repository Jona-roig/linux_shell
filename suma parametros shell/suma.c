#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 8

#include "mis_funciones.h"

int main (int argc, char *argv[]) {
	char buf[80];
	int i;
	int sum = 0;

	if (argc == 1) {
		Usage();
		return 0;
	}
	
	for (i = 1; i < argc; ++i) {
		if (esNumero(argv[i]) == 0) {
			sprintf (buf, "Existe al menos un parametro que no es un numero\n");
			write (1, buf, strlen (buf));
			return 0;
		}
		else { 
			sum += mi_atoi(argv[i]);		
		}    	
    }
	sprintf (buf, "La suma de los parametros es: %d \n", sum);
	write (1, buf, strlen (buf));

	return 0;
}
