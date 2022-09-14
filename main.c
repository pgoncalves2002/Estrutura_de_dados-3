#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct data{
    int dia;
    char mes[20];
    int ano;
};

struct agenda{
    char nome[50];
    char telefone[50];
    struct data dataDeNascimento;
};

int main() {
    struct agenda *agendas;
    int opcao;
    bool continua = false;
    int N_agendas = 0;//contador
    agendas = (struct agenda*) malloc(sizeof (struct agenda));

    if (!agendas){
        printf("não foi possivel fazer a alocacao de memoria");
        exit(1);
    }

    printf("digite seu nome");
    scanf("%s", &agendas->nome);
    printf("digite seu telefone");
    scanf("%s", &agendas->telefone);
    printf("digite o dia do seu nascimento");
    scanf("%d", &agendas->dataDeNascimento.dia);
    printf("digite o mes do seu nascimento");
    scanf("%s", &agendas->dataDeNascimento.mes);
    printf("digite o ano do seu nascimento");
    scanf("%d", &agendas->dataDeNascimento.ano);

    while (continua){
        N_agendas++;
        agendas = (struct agenda*) realloc(agendas,(N_agendas+1) * sizeof (struct agenda));
        printf("digite seu nome");
        scanf("%s", &agendas[N_agendas].nome);
        printf("digite seu telefone");
        scanf("%s", &agendas[N_agendas].telefone);
        printf("digite o dia do seu nascimento");
        scanf("%d", &agendas[N_agendas].dataDeNascimento.dia);
        printf("digite o mes do seu nascimento");
        scanf("%s", &agendas[N_agendas].dataDeNascimento.mes);
        printf("digite o ano do seu nascimento");
        scanf("%d", &agendas[N_agendas].dataDeNascimento.ano);

        printf("deseja criar outra entrada na agenda?\ndigite 1 para sim e 0 para nao");
        printf("%d", &opcao);

        if(opcao == 0){
            continua = false;

        }
    }

    for (int i = 0; i < N_agendas; i++) {
        printf("%s\n", agendas[i].nome);
        printf("%s\n", agendas[i].telefone);
        printf("Data de Nascimento: %d / %s / %d\n", agendas[i].dataDeNascimento.dia, agendas[i].dataDeNascimento.mes, agendas[i].dataDeNascimento.ano);
    }







    return 0;
}

/* for (int i = 0; i < N_agendas; ++i) {
printf("digite seu nome");
scanf("%s", &agendas[i].nome);
printf("digite seu telefone");
scanf("%s", &agendas[i].telefone);
printf("digite o dia do seu nascimento");
scanf("%d", &agendas[i].dataDeNascimento.dia);
printf("digite o mes do seu nascimento");
scanf("%s", &agendas[i].dataDeNascimento.mes);
printf("digite o ano do seu nascimento");
scanf("%d", &agendas[i].dataDeNascimento.ano);
}

    */
/*printf("digite o numero de agnedas que desaj criar:\n");
    scanf("%d", &N_agendas);
    */