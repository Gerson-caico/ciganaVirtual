/*
Universidade Federal do Rio Grande do Norte                 
Centro de Ensino Superior do Seridó - CERES     
Projeto Sistema de Gestão de Sortilégios                   
Desenvolvido por @gersonsouza - verão/2021 
*/                 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void telaInicial(void);
char menuPrincipal(void);
char menuSigno(void);
char menuUsuario(void);
char menuPrevisoes(void);
void telaCadastroUsuario(void);


int main(void) {
    char opcao;
    
    telaInicial();
    opcao = menuPrincipal();
    opcao = menuSigno();
    opcao = menuUsuario();
    opcao = menuPrevisoes();
    telaCadastroUsuario();
    
    return 0;

}


void telaInicial(void) {
          
     system("clear");	
     printf(" \n");
     printf(" \n");

     printf("***********************************************************************\n");
     printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
     printf("***********************************************************************\n");
    
     printf(" \n");
     printf(" \n");
    
     printf("Apesar de não possuir fundamentação científica comprovada, a Astrologia continua a atrair a atenção de milhares de pessoas ao redor do mundo. Não é raro encontrar pessoas dos mais variados níveis culturais que incluem, como parte dos seus hábitos cotidianos, a consulta a um ou mais  mecanismos de adivinhação, mesmo que o façam apenas por diversão. Jornais, revistas e sites na internet continuam a publicar diariamente horóscopos e demais adivinhações baseadas na Astrologia. O presente projeto tem como objetivo desenvolver um programa de computador que simule a realização de previsões astrológicas, baseadas em dados reais do usuário, que serão efetuadas uma espécie de Cigana Virtual. \n");
    
     printf(" \n");
     printf(" \n");

     printf("Estes são os 12 signos do Zodíaco:\n");
     printf(" \n");
     printf("- ÁRIES: de 21/Março a 19/Abril\n");
     printf(" \n");
     printf("- TOURO: de 20/Abril a 20/Maio\n");
     printf(" \n");
     printf("- GÊMEOS: de 21/Maio a 21/Junho\n");
     printf(" \n");
     printf("- CÂNCER: de 22/Junho a 22/Julho\n");
     printf(" \n");
     printf("- LEÃO: de 23/Julho a 22/Agosto\n");
     printf(" \n");
     printf("- VIRGEM: de 23/Agosto a 22/Setembro\n");
     printf(" \n");
     printf("- LIBRA: de 23/Setembro a 22/Outubro\n");
     printf(" \n");
     printf("- ESCORPIÃO: de 23/Outubro a 21/Novembro\n");
     printf(" \n");
     printf("- SAGITÁRIO: de 22/Novembro a 21/Dezembro\n");
     printf(" \n");
     printf("- CAPRICÓRNIO: de 22/Dezembro a 19/Janeiro\n");
     printf(" \n");
     printf("- AQUÁRIO: de 20/Janeiro a 18/Fevereiro\n");
     printf(" \n");
     printf("- PEIXES: de 19/Fevereiro a 20/Março\n");
     printf(" \n");
     printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
     getchar();
   
}

char menuPrincipal(void) {
        
        char op;
        
        system("clear");

	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
    
    	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ###############  MENU PRINCIPAL ###############          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("***           1. Signos                                             ***\n");
	printf("***           2. Usuários                                           ***\n");
	printf("***           3. Previsões                                          ***\n");
	printf("***           4. Sobre a Cigana-Virtual                             ***\n");
	printf("***           0. Sair do sistema                                    ***\n");
	printf("***                                                                 ***\n");
	printf("***           Escolha a opção desejada:                             ***\n");
	scanf("%c", &op);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

char menuSigno(void) {
        char op;
        system("clear");

	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
     	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ################  MENU SIGNOS  ################          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("***           1. Pesquisar os signos                                ***\n");
	printf("***           2. Pesquisar os ascendentes                           ***\n");
	printf("***           0. Voltar ao Menu Principal                           ***\n");
	printf("***                                                                 ***\n");
	printf("***           Escolha a opção desejada:                             ***\n");
	scanf("%c", &op);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
	
}

char menuUsuario(void) {
    	char op;
    	    
        system("clear");

	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
    
    	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ################  MENU USUÁRIO ################          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("***           1. Cadastrar novo usuário                             ***\n");
	printf("***           2. Atualizar                                          ***\n");
	printf("***           3. Excluir                                            ***\n");
	printf("***           4. Pesquisar                                          ***\n");
	printf("***           0. Voltar ao Menu Principal                           ***\n");
	printf("***                                                                 ***\n");
	printf("***           Escolha a opção desejada:                             ***\n");
	scanf("%c", &op);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
	
}

char menuPrevisoes(void) {
    	char op;
    	    
        system("clear");

	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
    
    	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ###############  MENU PREVISÕES ###############          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("***           1. Cadastrar nova previsão                            ***\n");
	printf("***           2. Atualizar                                          ***\n");
	printf("***           3. Excluir                                             ***\n");
	printf("***           4. Consultar                                          ***\n");
	printf("***           0. Voltar ao Menu Principal                           ***\n");
	printf("***                                                                 ***\n");
	printf("***           Escolha a opção desejada:                             ***\n");
	scanf("%c", &op);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
	
}

void telaCadastroUsuario(void) {
        
	char nome[60];
	char dataNasc[12];
	char email[65];
	
	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
    
    	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ############  CADASTRAR USUÁRIOS   ############          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", dataNasc);
	getchar();
	printf("           E-mail: ");
	scanf("%[a-z@.]", email);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



