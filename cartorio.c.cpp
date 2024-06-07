
#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria 
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsavel por cuisar das strings

int registro() //Função responsável por cadastrar os usuários no sistema
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da criação de variáveis/string
	
	printf("Digite o cpf a ser cadastrado:  "); //coletando informação do usuário
	scanf("%s", cpf); // %s refre-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "W" significa escrever
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen (arquivo, "a");
	fprintf(file,nome);	
	fclose (file);
	
    file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	

	}

int consulta() 
{
	setlocale(LC_ALL, "portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf ("digite o cpf a ser consultado: ");
    scanf("%s" ,cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{ 
	    printf("nao foi possivel abrir o arquivo, não localizado! .\n");
	}
    
    while(fgets(conteudo,200,file) != NULL);
    {
    	printf("\n Essas são as informações do usuario: ");
    	printf ("%s",conteudo);
    	printf ("\n\n");
    	
    	system("pause");
    	
	}
     
    
}

int deletar() 
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("pause");
		
		
	}
	
}

int main () 
{
    int opcao=0; //Definindo variaveis
    int laco=1;
    
    for(laco=1;laco=1;)
{
    system("cls");
    
        setlocale(LC_ALL, "portuguese");
	    printf("###Cartório da EBAC###\n\n)"); //inicio do menu
	    printf("Escolha a opção desejada do menu: \n\n");
     	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("\t4 - Sair do sistema\n\n");

	    printf("Opção:") ; //fim do menu 
	

        scanf("%d" , &opcao); //armazenando a escolha do usuario

        system("cls");
    
        switch(opcao)
        {
        	case 1:
        	registro(); // chamada de funções
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
     	    printf("essa opcao nao esta disponivel \n");
            system("pause");
     	    break;
		}
    
    
        
       } //fim da selecao 
   
       }


















   


