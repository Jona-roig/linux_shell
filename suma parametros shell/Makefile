all: suma

suma: suma.c
	gcc -c mis_funciones.c -o mis_funciones.o
	gcc -c suma.c -o suma.o
	gcc suma.o mis_funciones.o -o suma

clean:
	rm suma
	rm mis_funciones.o
	rm suma.o
