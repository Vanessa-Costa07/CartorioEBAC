#include <stdio.h> //Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //Biblioteca de oloca��o de espa�o em mem�ria
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o

int main()
    {
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
    	{
	
     	system("cls");
	
        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

        printf("### Cart�rio da EBAC ###\n\n");//inicio do menu
        printf("Escolha a opcao desejada do menu:\n\n");
        printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
        printf("Op��o: ");//Fim do menu
    
        scanf("%d", &opcao);//Armazenamendo a escolha do usu�rio
	  
 	    system("cls");
	
	    if(opcao==1)//inicio da sele��o
	    
	    switch(opcao)
	    {
	        printf("Voc� escolheu o registro de nomes!\n");
	        system("pause");
        }
        if(opcao>=2)  
        {
	        printf("Voc� escolheu o consultar os nomes!\n");
		    system("pause");
        }
		if(opcao>=3)
    	{
		    printf("Voc� escolheu deletar nomes!\n");
	        system("pause");
    	}
	    if(opcao>=4  || opcao<=0)
	    {
	        printf("Essa op��o n�o est� disponivel!\n");
		    system("pause");
	        break;

        }//fim de sele��o

    }


	
	    

	
	

	
