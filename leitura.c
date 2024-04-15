#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
int main (void){

string frase = get_string("Texto:  ");

float numero_de_letras = 0;
float numero_de_frases = 0;
float numero_de_palavras = 1;
for (int n = 0; n < strlen(frase); n++){

    if (((frase[n] > 64) && (frase [n] < 91)) || ((frase[n] > 96) && (frase[n] < 123)))
    {
       numero_de_letras++;
    }
    if (frase[n] == ' ')
    {
        numero_de_palavras++;
    }
    if (frase[n] == '.' || frase[n] == '?' || frase[n] == '!')
    {
        numero_de_frases++;
    }

}

// Fórmula da leitura

float L =  (numero_de_letras/numero_de_palavras)*100;
float S =  (numero_de_frases/numero_de_palavras)*100;
int index = round(0.0588 * L - 0.296 * S - 15.8);

if (index < 1){
    printf("Grade lower than 1 \n");
    return 0;
}
else if(index > 16){
    printf("Grade 16+ \n");
    return 0;
}
else {
    printf("Grade %d \n", index);
}



}
