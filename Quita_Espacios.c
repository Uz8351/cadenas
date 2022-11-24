

/*Quita_Espacios.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>//Para llamada a malloc

/*Declaramos función*/

void Suprimo_Espacios(char *Frase_Origen, char *Frase_Sin_Espacios) //Tipo argumentos tipo char*
{

int i, j;
i=0;
j=0; /*Inicializamos valores a cero*/

for ( i = 0;Frase_Origen[i]!='\n';i++)
	/*Mientras no lleguemos al final de la frase repetimos*/
if(Frase_Origen[i]!=' ')
	/*Si la cadena de origen llega a espacio en blanco*/
{

Frase_Sin_Espacios[j]=Frase_Origen[i]; //Hasta que se cumpla la igualdad
j++;

}

Frase_Sin_Espacios[j]='\0';

}

//Iniciamos main.

int main(int argc, char const *argv[])
{
	
char Frase[50];
char *Frase_Nueva;

/*Ahora vamos a reservar memoria tipo  char para Frase_Nueva*/

Frase_Nueva=(char *)malloc(50*sizeof(char));

if (Frase!=NULL)
{
	
printf("INTRODUCE UNA CADENA\n");
fgets(Frase,50,stdin);
/*Llamamos a la función  declarada anteriormente
pasándole:Frase y Frase_Nueva*/
Suprimo_Espacios(Frase,Frase_Nueva);
printf("%s\n",Frase_Nueva );
}
else

printf("Imposible asignar memoria\n");

}

	
