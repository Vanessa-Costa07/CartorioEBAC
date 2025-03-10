#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��es de texto por regi�o
#include <string.h> // Biblioteca respons�vel por cuidar das strings

int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{    
    // In�cio cria��o de vari�veis/strings
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char carga[40];
    // Final da cria��o de vari�veis/strings
    
    printf("Digite o CPF a ser cadastrado: "); // Coletando informa��es do usu�rio
    scanf("%s", cpf); // %s refere-se ao tipo string
    
    strcpy(arquivo, cpf); // Respons�vel por copiar o CPF para o nome do arquivo
    
    FILE *file; // Cria o arquivo
    file = fopen(arquivo, "w"); // Cria o arquivo com o nome do CPF
    fprintf(file, "%s", cpf); // Salva o valor do CPF no arquivo
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file, "%s", nome);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);

    file = fopen(arquivo, "a");
    fprintf(file, "%s", sobrenome);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite a carga a ser cadastrada: ");
    scanf("%s", carga);

    file = fopen(arquivo, "a");
    fprintf(file, "%s", carga);
    fclose(file);
    
    system("pause"); // Corrigido com ponto e v�rgula
}

int consulta()
{
    setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem

    char cpf[40];
    char conteudo[200];

    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file; // Declarando o ponteiro para arquivo
    file = fopen(cpf, "r"); // Abre o arquivo com o nome do CPF
    
    if (file == NULL)
    {
        printf("N�o foi poss�vel abrir o arquivo, n�o localizado!\n");
        system("pause");
        return 0; // Retorna 0 caso n�o consiga abrir o arquivo
    }

    while (fgets(conteudo, 200, file) != NULL)
    {
        printf("Essas s�o as informa��es do usu�rio:\n");
        printf("%s", conteudo); // Corrigido: faltava o `,` para imprimir a vari�vel
        printf("\n\n");
    }
    
    fclose(file); // Fechar o arquivo ap�s a leitura
    system("pause");
}

int deletar()
{
    printf("Voc� escolheu deletar nomes!\n");
    system("pause");
}

int main()
{
    int opcao = 0; // Definindo vari�veis
    int laco = 1;

    // Corrigido para loop infinito com 'while(1)'
    while (1)
    {
        system("cls");

        setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem

        printf("### Cart�rio da EBAC ###\n\n"); // In�cio do menu
        printf("Escolha a op��o desejada do menu:\n\n");
        printf("\t1 - Registrar nomes\n");
        printf("\t2 - Consultar nomes\n");
        printf("\t3 - Deletar nomes\n\n");
        printf("\t4 - Sair do sistema\n\n");
        printf("Op��o: "); // Fim do menu
    
        scanf("%d", &opcao); // Armazenando a escolha do usu�rio
    
        system("cls");
    
        switch (opcao) // In�cio da sele��o
        {
            case 1:
                registro();
                break;
                
            case 2:
                consulta();
                break;
                
            case 3:
                deletar();
                break;
                
            case 4:
                printf("Obrigado por utilizar o sistema!\n");
                return 0;
                break;
                
            default:
                printf("Essa op��o n�o est� dispon�vel!\n");
                system("pause");
                break;
        }
    }
}

