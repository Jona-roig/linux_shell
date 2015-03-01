
// Pre: Cierto
// Post: Ofrece información al usuario sobre el 
//       funcionamiento del programa.
void Usage();

// Pre: Se introduce un string de char cualquiera
// Post: Devuelve 1 si el string es un numero o 0
//		 en caso de no ser un numero.
int esNumero (char *str);

// Pre: Un char correspondiente a un numero entre '0' y '9'
// Post: Devuelve un int correspondiente al char
unsigned int char2int(char c);

// Pre: Un String correspondiente a un numero
// Post: Devuelve un int correspondiente al string
// Obs: Necesita la funcion char2int para funcionar
int mi_atoi(char *s);