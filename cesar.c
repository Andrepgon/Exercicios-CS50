#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main (int argc, string argv[])
{
    //garantir o input correto do usuário
    if (argc != 2)
    {
        printf("Uso: ./cesar (numero da chave) \n" );
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
           printf("Uso: ./cesar (numero da chave) \n" );
           return 1;
        }
    }
    int chave = atoi(argv[1]);
    if (chave == 0)
    {
        printf("A chave fornecida não é um número válido.\n");
        return 1;
    }
    //pedir a palavra que será cifrada

    string letra = get_string ("Frase ou palavra a ser cifrada: ");

    //cifrar a palavra/frase

    for (int n = 0; n < strlen(letra); n++)
    {


        if (isupper(letra[n]))
        {
            letra[n] = (letra[n] - 65 + chave) % 26 + 65;
        }
         if (islower(letra[n]))
        {
            letra[n] = (letra[n] - 97 + chave) % 26 + 97;
        }
    
    }

    printf("Texto cifrado: %s ", letra);
    printf("\n");
