#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[100];
    float rendimento_escolar;
    float nota_escrita;
    float nota_curriculo;
    float nota_total;
    char email[100];
};

int main()
{
    struct Aluno candidato[200];
    //Grupo do projeto: Ícaro César e Victor Max
    int menu;
    int vagas_total=0;
    int vagas_disponiveis=vagas_total;
    int vagas_ocupadas=0;
    char nome_do_responsavel[20];
    int menu_coordenador;
    int menu_aluno;
    int nota_indice;
    double remuneracao;
    do
    {


        printf("Escolha uma das tres opcoes a seguir:\n");
        printf("1 - Aluno (falta concluir)\n");
        printf("2 - Coordenador (concluido)\n"); //transferir para o projeto_estagio;
        printf("3 - Sair\n");
        scanf("%i",&menu);

        //menu geral//
        switch (menu)
        {
        case 1: //aluno//
            printf("Qual a opcao que voce deseja ?\n");
            printf("1 - Ver vagas disponiveis para estagio\n");
            printf("2 - Candidate-se a vaga de estagio\n");
            printf("3 - Envie seu currículo para o estagio\n");
            printf("4 - Resultado final da seleçao de estagio\n");
            scanf("%i",&menu_aluno);
            switch(menu_aluno)
            {
            case 1:
                printf("Vagas disponiveis para estagio: %i\n",vagas_disponiveis);//altermaneto da variavel
                break;
            case 2:
                //o if está inicializando o cadastro
                if(vagas_disponiveis!=0)
                {
                    printf("Qual o seu e-mail ?\n");
                    scanf("%s",&candidato[vagas_total-vagas_disponiveis].email);
                    printf("Qual o seu nome ?\n");
                    scanf("%s",&candidato[vagas_total-vagas_disponiveis].nome);
                    vagas_disponiveis-=1;
                    vagas_ocupadas+=1;

                }
                else
                {
                    printf("nao ha vagas disponiveis\n");
                }
                break;
            }

            break;
        case 2: //coordenador//
            printf("Opcoes:\n");
            printf("1 - definir o quantitativo de vagas (concluido)\n");
            printf("2 - cadastrar novas vagas de estágios e seus requisitos (concluido)\n");
            printf("3 - informar a pessoa responsavel pela selecao (concluido com duvidas)\n");
            printf("4 - atribuir informacoes relacionadas a remuneracao (concluido)\n");
            printf("5 - cadastrar as notas atribudas durante a selecao e todas as etapas (concluido)\n");
            printf("6 - gerar relatorio de aprovados num arquivo externo (falta concluir)\n");
            printf("7 - Listar candidatos\n");
            scanf("%i",&menu_coordenador);

            //menu do coordenador//
            switch(menu_coordenador)
            {
            case 1:
                printf("informe o quantitativo de vagas:\n");
                scanf("%i",&vagas_total);//alteramento da variavel
                break;
            case 2:
                printf(" Cadastrar novas vagas de estagio\n");
                scanf("%i",&vagas_total);//alteramento da variavel
                printf("requisitos para participar da selecao de estagio:\n");
                printf("1 - Parte Escrita\n");
                printf("2 - Entrevista e analise de curriculo\n");
                printf("3 - CRE\n");
                break;
            case 3:
                printf("a pessoa responsavel pela selecao eh:\n");
                scanf("%s",&nome_do_responsavel);
                break;
            case 4:
                printf("a remuneracao sera de:");
                scanf("%lf",&remuneracao);
                break;
            case 5:
                printf("Para qual aluno voce deseja atribuir a nota ?\n");  
                for (int i=0; i<vagas_ocupadas;i++)
                {
                    printf("%i %s\n",i,candidato[i].nome);
                }
                scanf("%i",&nota_indice);//transferir projeto_estagio
                printf("a nota do aluno da parte escrita foi de:");
                scanf("%f",&candidato[nota_indice].nota_escrita);//transferir projeto_estagio
                printf("a nota do curriculo do aluno foi de:");
                scanf("%f",&candidato[nota_indice].nota_curriculo);//transferir projeto_estagio
                printf("o CRE do aluno foi de:");
                scanf("%f",&candidato[nota_indice].rendimento_escolar);//transferir projeto_estagio
                candidato[nota_indice].nota_total=(candidato[nota_indice].nota_escrita+candidato[nota_indice].nota_curriculo+candidato[nota_indice].rendimento_escolar)/3;// transferir projeto_estagio
                printf("a nota do aluno na selecao de estagio foi de %.1f\n",candidato[nota_indice].nota_total);//transferir projeto_estagio
                break;
            case 7:
                for (int i=0; i<vagas_ocupadas;i++)
                {
                    printf("%s nota total = %f e-mail = %s\n",candidato[i].nome,candidato[i].nota_total,candidato[i].email);
                }
            }
            break;

        default:
            printf("obrigado pela preferencia\n");
            break;
        }
        vagas_disponiveis=vagas_total-vagas_ocupadas;
    }
    while(menu!=3);

    return 0;
}

