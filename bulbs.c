#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main ()

{
string número = get_string("Digite a letra que sera convertido para binario:   ");
int binário[10] = {0};
int tamanho = strlen(número);

printf("Mensagem: %s \n", número);
for (int n = 0; n < tamanho; n++)

{
    int potencia = 7;
    while (potencia >= 0)
    {
        if (número[n] >= pow(2,potencia))
            {
                binário[n] += 1 *(pow(10,potencia));
                número[n] -= pow(2,potencia);
            }
        else if (número[n] < pow(2,potencia))
            {
                binário[n] += 0;
            }
        potencia--;
    }

printf("%08d", binário[n]);
printf ("\n");
}



return 0;
}
