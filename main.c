/*
Nombre y Apellido: Leonel Walter Rivas  Campos
*/

#include <stdio.h>
#include <ctype.h>


int getchar ();
int putchar (int c);

int main()
{

char caracter;
//printf ("ingrese lo que quiera: ");
//scanf ("%c" , caracter);

    while ((caracter = getchar()) != EOF  ){

        if( isdigit(caracter) == 0){
            
            if(isupper(caracter)){
                putchar(tolower(caracter));
            }else{
            putchar(toupper(caracter));
            }
        }
    }

return 0;
}