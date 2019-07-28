/* Una variable es un identificador con el que podemos acceder
   y guardar informacion que puede ser procesada por la 
   computadora.
   Las variables tienen importancia pues con ellas creamos un enlace 
   para alamacenar nuestros datos y realizar operaciones con ellos.
   En el curso veremos tres tipos de datos que podemos procesar y,
   evidentemente, manejar con nuestra computadora:
   El tipo de dato;
      int, que nos permite almacenar numeros enteros.
      float, que nos permite almacenar numeros con decimales.
      char, que nos permite guardar letras.
*/

#include <stdio.h>

int main(void)
{
	int variable_entera = 10;
	float variable_decimal = 10.12345;
	char variable_letra = 'a';

	printf("La variable entera guarda el numero: %d\n", variable_entera);
	printf("La variable decimal guarda el numero: %f\n", variable_decimal);
	printf("La variable de caracteres guarda el caracter: %c\n", variable_letra);

        getchar();
	return 0;
}
