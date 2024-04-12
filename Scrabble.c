#include <stdio.h>
#include <cs50.h>

int main (void)
{
//dicionário de variáveis

int pontos[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10 };

//pedir as palavras

string palavra_1 = get_string ("Digite a palavra do jogador 1:   ");
string palavra_2 = get_string ("Digite a palavra do jogador 2:   ");

//descobrir o tamanho das palavras

int tamanho_1 = 0;
while (palavra_1[tamanho_1] != '\0')
{
    tamanho_1++;
}

int tamanho_2 = 0;
while (palavra_2[tamanho_2] != '\0')
{
    tamanho_2++;
}

//passar toda a palavra para as letras maiúsculas

for (int x = 0; x < tamanho_1; x++ ){

    if (palavra_1[x] >= 'a' && palavra_1[x] <= 'z'){

        palavra_1[x] = palavra_1[x] - 32;
    }

}
for (int y = 0; y < tamanho_2; y++ ){

    if (palavra_2[y] >= 'a' && palavra_2[y] <= 'z'){

        palavra_2[y] = palavra_2[y] - 32;
    }

}
//transformar as palavras para a pontuação

 int score1 = 0;
    for (int i = 0; i < tamanho_1; i++)
    {
        if (palavra_1[i] >= 'A' && palavra_1[i] <= 'Z')
        {
            score1 += pontos[palavra_1[i] - 'A'];
        }
    }

    int score2 = 0;
    for (int m = 0; m < tamanho_2; m++)
    {
        if (palavra_2[m] >= 'A' && palavra_2[m] <= 'Z')
        {
            score2 += pontos[palavra_2[m] - 'A'];
        }
    }
    
//comparar a pontuação

if ( score1 > score2){

    printf("O jogador 1 venceu \n");
}
if ( score2 > score1){

    printf("O jogador 2 venceu \n");
}
if (score1 == score2){

    printf("Empate!");
}



}
