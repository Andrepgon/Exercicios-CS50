#include <stdio.h>

int main() {

    // Declaração das variáveis
    int troco;

    // Pedir a quantidade de troco (EM CENTAVOS)
    printf("Troco em centavos: \n");
    scanf("%d", &troco);

    // Defesa para deixar apenas em centavos 
    if (troco < 0 ) {
        printf("Esse numero nao e aceito para o calculo \n");
        return 0;
    }

    if (troco > 99) {
        printf("O valor do troco extrapolou apenas as moedas de centavo\n");
        return 0;
    }

    // Variáveis para armazenar a quantidade de moedas de cada denominação
    int quantidade_de_moedas_50 = 0, quantidade_de_moedas_25 = 0, quantidade_de_moedas_10 = 0, quantidade_de_moedas_5 = 0, quantidade_de_moedas_1 = 0;

    // Cálculo da quantidade de moedas necessárias
    if (troco >= 50) {
        quantidade_de_moedas_50 = troco / 50;
        troco -= 50 * quantidade_de_moedas_50;
    }

    if (troco >= 25) {
        quantidade_de_moedas_25 = troco / 25;
        troco -= 25 * quantidade_de_moedas_25;
    }

    if (troco >= 10) {
        quantidade_de_moedas_10 = troco / 10;
        troco -= 10 * quantidade_de_moedas_10;
    }

    if (troco >= 5) {
        quantidade_de_moedas_5 = troco / 5;
        troco -= 5 * quantidade_de_moedas_5;
    }

    if (troco >= 1) {
        quantidade_de_moedas_1 = troco / 1;
        troco -= 1 * quantidade_de_moedas_1;
    }

    // Cálculo do total de moedas
    int moedas_finais = quantidade_de_moedas_50 + quantidade_de_moedas_25 + quantidade_de_moedas_10 + quantidade_de_moedas_5 + quantidade_de_moedas_1;

    printf("Voce tera que usar %d moedas \n", moedas_finais);
    printf("Serao necessarias: %d de 50 centavos \n", quantidade_de_moedas_50);
    printf("Serao necessarias: %d de 25 centavos \n", quantidade_de_moedas_25);
    printf("Serao necessarias: %d de 10 centavos \n", quantidade_de_moedas_10);
    printf("Serao necessarias: %d de 5 centavos \n", quantidade_de_moedas_5);
    printf("Serao necessarias: %d de 1 centavos \n", quantidade_de_moedas_1);

    return 0;
















}