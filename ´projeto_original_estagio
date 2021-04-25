#include <stdio.h>
#include <stdlib.h>
int main(){
    int menu;
    int vagas;
    int menu_coordenador;
    double remuneracao;
    float nota_escrita;
    float nota_curriculo;
    float rendimento_escolar;
    float nota_total;
    printf("Escolha uma das tres opcoes a seguir:\n");
    printf("1 - Aluno (falta concluir)\n");
    printf("2 - Coordenador (falta concluir)\n");
    printf("3 - Funcionario (falta concluir)\n");
    scanf("%i",&menu);

    //menu geral//
    switch (menu)
    {
    case 1: //aluno//
        
        break;
    case 2: //coordenador//
        printf("Opcoes:\n");
        printf("1 - definir o quantitativo de vagas (concluido)\n");
        printf("2 - cadastrar novas vagas de estágios e seus requisitos (falta concluir)\n");
        printf("3 - informar a pessoa responsavel pela selecao (falta concluir)\n");
        printf("4 - atribuir informacoes relacionadas a remuneracao (falta concluir)\n");
        printf("5 - cadastrar as notas atribudas durante a selecao e todas as etapas (falta concluir)\n");
        printf("6 - gerar relatorio de aprovados num arquivo externo (falta concluir)\n");
        scanf("%i",&menu_coordenador);
        
        //menu do coordenador//
        switch(menu_coordenador){
            case 1:
                printf("informe o quantitativo de vagas:\n");
                scanf("%i",&vagas);

                break;
            case 2:
                printf(" Cadastrar novas vagas de estagio\n");
                scanf("%i",&vagas);
                printf("requisitos para participar da selecao de estagio:\n");
                printf("1 - Parte Escrita\n");
                printf("2 - Entrevista e analise de curriculo\n");
                printf("3 - CRE\n");
                break;
            case 3:
                printf("a pessoa responsavel pela selecao eh Marcelo");
                break;
            case 4:
                printf("a remuneracao sera de:");
                scanf("%lf",&remuneracao);
                break;
            case 5:
            printf("a nota do aluno da parte escrita foi de:");
            scanf("%f",&nota_escrita);
            printf("a nota do curriculo do aluno foi de:");
            scanf("%f",&nota_curriculo);
            printf("o CRE do aluno foi de:");
            scanf("%f",&rendimento_escolar);
            nota_total=(nota_escrita+nota_curriculo+rendimento_escolar)/3;
            printf("a nota do aluno na selecao de estagio foi de %.1f",nota_total);

        }
        break;
    case 3: // funcionario da empresa//

        break;
    
    default:
        printf("opcao invalida");
        break;
    }

}
