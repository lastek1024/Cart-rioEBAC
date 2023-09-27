#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
    char arquivo[40];
	char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("Digite o CPF a ser cadastrado:");
    scanf("%s", cpf);
    strcpy(arquivo, cpf);
    
    FILE *file;
    file = fopen(arquivo, "w");
    fprintf(file,cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o Sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    system("pause");
   

    
    
   
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		setlocale(LC_ALL, "Portuguese");
		
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
		system("pause");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
		system("pause");
	}
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	fclose(file);
	
	remove(cpf);
	
	printf("Usu�rio removido!\n");
	system("pause");

	
	if(file == NULL)
	{
		printf("Usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
	
 				
}

int main()
    {
    	int opcao=0;
    	int laco=1;
    	
    	for(laco=1;laco=1;)
    	{
    		
			system("cls");
			
			setlocale(LC_ALL, "Portuguese");
    		
    		printf ("###Cart�rio da EBAC###\n\n");
    		printf ("Escolha a op��o desejada do menu\n\n");
    		printf("\t1 - Registrar Usu�rio\n");
    		printf("\t2 - Consultar Usu�rio\n");
    		printf("\t3 - Deletar Usu�rio\n");
    		printf("\t4 - Sair do Sistema\n");
    		printf("Op��o: ");
    		
    		scanf("%d", &opcao);
    		
    		system("cls");
    		
    		switch(opcao)
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
				printf("Saindo do Sistema...\n");
				return 0;	
				
				default:
				printf("Essa op��o n�o est� dispon�vel\n");
    		    system("pause"); 
    		    break;
				 
					
					
			}
    		
    	
}
}  
	    
		
		



	


