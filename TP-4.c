/* Informa la longitud promedio de las líneas, la cantidad de Caracteres y cantidad de Lineas
* por Christian Alexis Gelman
* 10-05-2015
*/
#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */
int main(void) {
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */
	
	for (nl = 0, nc = 0; (c = getchar()) != EOF; ++nc)
	if (c == '\n')
	{
		++nl;
		--nc;
	}		
	
	if (!feof(stdin))
		perror("No se pudo seguir leyendo de la entrada debido a un error");
	
	printf("Longitud promedio: %.1f\n", (nl == 0) ? 0 : nc / (float)nl);
	printf("Cantidad de Caracteres: %d\n", nc);
	printf("Cantidad de Lineas: %d\n", nl);

	return EXIT_SUCCESS;
}