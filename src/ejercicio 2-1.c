/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int contador;
	int acumulador;
	float promedio;
	contador=0;
	acumulador=0;

	for(int i=0;i<7;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero);

		while(numero>=0)
		{
			printf("error, reingrese numero");
			scanf("%d",&numero);
		}

		contador++;
		acumulador+=numero;
	}

	promedio= ((float)acumulador/contador);

	printf("el promedio da como resultado %.2f",promedio);
	return 0;
}
