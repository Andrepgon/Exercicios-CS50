#include <stdio.h>

int main()
{
//dicionário de variáveis
int semanas[11] = {0,1,2,3,4,5,6,7,8,9,10};
int resposta[11];
int tempo;
int soma = 0;
char escolha;
//perguntar quantas semanas

printf("Quantas semanas voce esta fazendo o CS50?  ");
scanf("%d", &tempo);

//defesa

if (tempo <= 0){

    printf("Voce nao iniciou o CS50 \n");
    return 0;
}

//descobrindo as horas por semana do usuário

for (int x = 0; x < tempo; x++)
{
    printf ("Quantas horas voce gastou na semana %d?", semanas[x]);
    scanf("%d", &resposta[x]);
    soma += resposta[x];
}

//Média ou Total

printf("Escreva, com letra maiuscula, M para descobrir a média do seu tempo de estudo ou pressione T para o seu tempo total: ");
scanf(" %c", &escolha);

if (escolha == 'M'){

    printf("Sua media de horas: %d horas \n", soma/tempo);
    return 0;
}
if (escolha == 'T'){

    printf("Seu total de horas: %d horas \n", soma);
    return 0;
}
else if (escolha != 'M' && escolha != 'T') {
   printf ("Essa opcao nao esta disponivel, escreva T ou M. \n");
   return 0;
}
return 0;
}
