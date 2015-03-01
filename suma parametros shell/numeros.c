#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 8

void Usage() {
	char buf[400];
	sprintf (buf, "Usage:listaParametros arg1 [arg2..argn] \n");
	write (1, buf, strlen(buf));

	sprintf (buf, "Este programa escribe por su salida la lista de argumentos que recibe \n");
	write (1, buf, strlen(buf));

}

esNumero (char *str) {
	if (str != NULL) {
		if (strlen (str) <= MAX_SIZE) {
			int i;
			char a = '0';
			char b = '9';

			for (i = 0; i < strlen (str); ++i) {
				if (str[i] != '-' || str[i] != '\0') {
				  	if (str[i] < a || str[i] > b) return 0;
				}
			}
			return 1;
		}
		return 0;
	}

	else return 0;
}


int main (int argc, char *argv[]) {
	char buf[80];
	int i;
	int all_numbers = 0;

	if (argc == 1) {
		Usage();
		return 0;
	}
	
	for (i = 0; i < argc; ++i) {
		sprintf (buf, "El argumento %d es %s\n", i, argv[i]);
		write (1, buf, strlen (buf));

		if (esNumero (argv[i]) == 1) sprintf (buf, "Es numero \n");
		else sprintf (buf, "No es numero \n");
		write (1, buf, strlen (buf));
     	
    }
	return 0;
}
