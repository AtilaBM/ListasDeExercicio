#include <stdio.h>

int main()
{
    int hora_inicio, minuto_inicio;
    int hora_fim, minuto_fim;
    int total_min_inicio, total_min_fim;
    int duracao_min, duracao_horas, duracao_minutos;

    printf("Informe o horário de início:\n");
    printf("Hora: ");
    scanf("%d", &hora_inicio);
    printf("Minuto: ");
    scanf("%d", &minuto_inicio);

    printf("\nInforme o horário de término:\n");
    printf("Hora: ");
    scanf("%d", &hora_fim);
    printf("Minuto: ");
    scanf("%d", &minuto_fim);

    total_min_inicio = hora_inicio * 60 + minuto_inicio;
    total_min_fim = hora_fim * 60 + minuto_fim;

    if (total_min_fim >= total_min_inicio)
    {
        duracao_min = total_min_fim - total_min_inicio;
    }
    else
    {
        duracao_min = (24 * 60) - total_min_inicio + total_min_fim;
    }

    duracao_horas = duracao_min / 60;
    duracao_minutos = duracao_min % 60;

    printf("\nInício do jogo: %02d:%02d\n", hora_inicio, minuto_inicio);
    printf("Término do jogo: %02d:%02d\n", hora_fim, minuto_fim);
    printf("Duração do jogo: %d horas e %d minutos\n", duracao_horas, duracao_minutos);

    return 0;
}