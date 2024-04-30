#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    //defesa

    if (argc != 2)
    {
        printf("./substitution (26 letras para o alfabeto) \n");
        return 1;
    }

    if ((strlen(argv[1]) != 26))
    {
        printf("o alfabeto deve ter 26 letras! \n");
        return 1;
    }

    //criação do alfabeto do usuário

    int alfabeto[26];

    for (int a = 0; a < strlen(argv[1]); a++)
    {
        alfabeto[a] = argv[1][a];
    }

    //pedindo texto do usuário

    string frase = get_string("Texto: ");

    // passando para o maiusculo

    for (int i = 0; i < strlen(frase); i++)
    {
        if (islower(frase[i]))
        {
            frase[i] = toupper(frase[i]);
        }
    }

    // associando o array frase ao array alfabeto

    for (int n = 0; n < strlen(frase); n++)
    {
        frase[n] = alfabeto[(frase[n] - 'A')];
    }

    //passando o resultado cifrado

    printf("Cifrado: %s \n",frase );

}

