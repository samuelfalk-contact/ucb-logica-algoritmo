#include <stdio.h>
int main()
{
    float n1[2], n2[2], n3[2], n4[2];
    int qtd_alunos=2;
    float media[2], media_geral;
    int opcao, i;
    int apro, repro;
    int aluno_maior, aluno_menor;

    do {
        printf("\n========================================\n");
        printf("       SISTEMA DE GESTAO DE TURMA       \n");
        printf("========================================\n");
        printf("1. Cadastrar notas dos alunos\n");
        printf("2. Exibir relatorio completo da turma\n");
        printf("3. Identificar maior e menor media\n");
        printf("4. Exibir estatisticas da turma\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                for (i=0;i<qtd_alunos;i++){
                    printf("\n\nDigite as notas do aluno %d:\n", i + 1);
                    printf("\nDigite a nota 01: ");
                    scanf("%f", &n1[i]);
                    printf("\nDigite a nota 02: ");
                    scanf("%f", &n2[i]);
                    printf("\nDigite a nota 03: ");
                    scanf("%f", &n3[i]);
                    printf("\nDigite a nota 04: ");
                    scanf("%f", &n4[i]);
                    media[i] = (n1[i] + n2[i] + n3[i] + n4[i]) / 4;
                }
                break;
            case 2:
                apro=0;
                repro=0;
                for (i=0;i<qtd_alunos;i++){
                    printf("\n\nRelatorio do aluno %d:\n", i + 1);
                    printf("\nNota 01: %.2f", n1[i]);
                    printf("\nNota 02: %.2f", n2[i]);
                    printf("\nNota 03: %.2f", n3[i]);
                    printf("\nNota 04: %.2f", n4[i]);
                    printf("\nMedia: %.2f", media[i]);
                    if(media[i] >= 7){
                        printf("\nAprovado!\n");
                        apro++;
                    } else if (media[i] >= 5) { 
                        printf("\nRecuperacao\n");
                    } else {
                        printf("\nReprovado\n");
                        repro++;
                    }
                }
                break;
            case 3:
                aluno_maior = 0;
                aluno_menor = 0;
                for (i=0;i<qtd_alunos;i++){
                    if (media[i] > media[aluno_maior]){
                        aluno_maior = i;
                    }
                    if (media[i] < media[aluno_menor]){
                        aluno_menor = i;
                    }
                }

                printf("\n\nA aluno com a maior media foi o %d com %.2f\n", aluno_maior + 1, media[aluno_maior]);
                printf("\n\nA aluno com a menor media foi o %d com %.2f\n", aluno_menor + 1, media[aluno_menor]);

                break;
            case 4:
            	media_geral = 0;
                for (i=0;i<qtd_alunos;i++){
                    media_geral += media[i];                   
                }
                media_geral /= qtd_alunos;
                printf("\nEstatisticas da turma: \nAprovados: %d\nReprovados: %d\nMedia Geral: %.2f", apro, repro, media_geral);

                break;
            case 0:
                printf("Obrigado por usar o nosso sistema de notas");
                break;
            default:
                printf("\n\nOpcao invalida, digite novamente\n");
        }

    } while (opcao != 0);

}


















