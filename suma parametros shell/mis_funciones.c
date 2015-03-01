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

int esNumero (char *str) {
	char buf[80];
	if (str != NULL) {
		if (strlen (str) <= MAX_SIZE) {
			int i;
			char a = '0';
			char b = '9';

			for (i = 0; i < strlen(str); ++i) {
				if (str[i] != '-') {
				  	if (str[i] < a || str[i] > b) return 0;
				}
			}
			return 1;
		}
		return 0;
	}

	else return 0;
}

unsigned int char2int(char c) {
	int n = (c - '0');
	return n;
}

int mi_atoi(char *s) {
	char buf[80];
	int i;
	int n = 0;
	int first = 0;
	int negative = 0;
	if (s[0] == '-') negative = 1;
	for (i = 0; i < strlen(s); ++i) {
		if (s[i] != '-') {
			
			if (first == 0) first = 1;
			else n *= 10;

			n += char2int(s[i]);
			
			
			//sprintf (buf, "el valor de n es: %d \n", n);
			//write (1, buf, strlen (buf)); 
		}
	}		
	if (negative == 1) n *= (-1);
	return n;

}