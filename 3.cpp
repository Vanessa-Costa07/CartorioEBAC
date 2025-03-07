#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //Biblioteca de olocação de espaço em memória
#include <locale.h> //Biblioteca de alocações de texto por região

int main()
    {
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
    	{
	
     	system("cls");
	
        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

        printf("### Cartório da EBAC ###\n\n");//inicio do menu
        printf("Escolha a opcao desejada do menu:\n\n");
        printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
        printf("Opção: ");//Fim do menu
    
        scanf("%d", &opcao);//Armazenamendo a escolha do usuário
	  
 	    system("cls");
	
	    if(opcao==1)//inicio da seleção
	    
	    switch(opcao)
	    {
	        printf("Você escolheu o registro de nomes!\n");
	        system("pause");
        }
        if(opcao>=2)  
        {
	        printf("Você escolheu o consultar os nomes!\n");
		    system("pause");
        }
		if(opcao>=3)
    	{
		    printf("Você escolheu deletar nomes!\n");
	        system("pause");
    	}
	    if(opcao>=4  || opcao<=0)
	    {
	        printf("Essa opção não está disponivel!\n");
		    system("pause");
	        break;

        }//fim de seleção

    }


	
	    

	
	

	
