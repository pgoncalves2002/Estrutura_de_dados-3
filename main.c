#include <stdio.h>

struct agenda{
    char nome[50];
    char telefone[50];
    struct data dataDeNascimento;
};
struct data{
    int dia;
    char mes[20];
    int ano;
};
int main() {
    int N_agendas;
    printf("digite o numero de agnedas que desaj criar:\n");
    scanf("%d", &N_agendas);

    struct agenda agendas[N_agendas];
    for (int i = 0; i < N_agendas; ++i) {
        printf("digite seu nome");
        scanf("%s", &agendas[i].nome);
        printf("digite seu telefone");
        scanf("%s", &agendas[i].telefone);
        printf("digite o dia do seu nascimento");
        scanf("%d", &agendas[i].dataDeNascimento.dia);
        printf("digite o mes do seu nascimento");
        scanf("%s", &agendas[i].dataDeNascimento.mes);
        printf("digite o ano do seu nascimento");
        scanf("%d", &agendas->dataDeNascimento.ano);

    }
    for (int i = 0; i < N_agendas; ++i) {
        printf("%s", agendas[i].nome);
        printf("%s", agendas[i]telefone);

    }
    return 0;
}
