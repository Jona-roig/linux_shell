#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Usage() {
	char buf[400];
	sprintf (buf, "Usage:listaParametros arg1 [arg2..argn] \n");
	write (1, buf, strlen(buf));

	sprintf (buf, "Este programa escribe por su salida la lista de argumentos que recibe  \n");
	write (1, buf, strlen(buf));

}

int main(int argc,char *argv[])
{
char buf[80];
int i;
	if (argc == 1) Usage();
	else {
		for (i=0;i<argc;++i) {
			if (i==0) {
				sprintf(buf,"El argumento %d es %s (es el nombre del ejecutable)\n",i,argv[i]);
			}
			else {
				sprintf(buf,"El argumento %d es %s\n",i,argv[i]);
			}
			write(1,buf,strlen(buf));
		}
	}
	return 0;
}
