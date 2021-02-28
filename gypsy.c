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

char menuPrincipal(void);
char menuSigno(void);
char menuUsuario(void);
char menuPrevisoes(void);
void telaSobre(void);

void telaConsultaSigno(void);
void telaConsultaAscendente(void);

void telaCadastraUsuario(void);
void telaAtualizaUsuario(void);
void telaExcluiUsuario(void);
void telaConsultaUsuario(void);

void telaCadastraPrevisao(void);
void telaAtualizaPrevisao(void);
void telaExcluiPrevisao(void);
void telaConsultaPrevisao(void);



int main(void) {

  	char opcao, sop;
	do {
	  	opcao = menuPrincipal();
		switch (opcao) {
		  	case '1': do {
					sop = menuSigno(); 
					switch (sop) {
						case '1': telaConsultaSigno();
			     						break;
						case '2': telaConsultaAscendente();
						      			break;
						case '3': menuPrincipal();
									break;
					}  
				} while (sop != '3');
		  	
			case '2': do {
					sop = menuUsuario();		
					switch (sop) {
		     				case '1': telaCadastraUsuario();
		  	               	     			break;
						case '2': telaAtualizaUsuario();
			        					break;
						case '3': telaExcluiUsuario();
       								break;
						case '4': telaConsultaUsuario();
									break;
						case '5': menuPrincipal();
									break;
					}
				} while (sop != '5');
				
			case '3': do {
					sop = menuPrevisoes();
					switch (sop) {
						case '1': telaCadastraPrevisao();
									 break;
						case '2': telaAtualizaPrevisao();
							                break;
						case '3': telaExcluiPrevisao();
									 break;
						case '4': telaConsultaPrevisao();
									 break;
						case '5': menuPrincipal();
									 break;
					}
				} while (sop != '5');
				
			case '4': telaSobre();
					break;
			
			case '5': printf("Saindo do Sistema... \n");
							break;
		}
	
	} while (opcao != '5');
		
				
 	return 0;

}


void telaSobre(void) {
          
     system("clear");	
     printf(" \n");
     printf(" \n");

     printf("***************************************************************************\n");
     printf("********** = = = = = Sistema de Gestão de Sortilégios = = = = = ***********\n");
     printf("***************************************************************************\n");
    
     printf(" \n");
     printf(" \n");
    
     printf("Apesar de não possuir fundamentação  científica  comprovada, a Astrologia   \n");
     printf("continua a atrair a atenção de milhares de pessoas ao redor do mundo. Não   \n");
     printf(" é raro encontrar pessoas dos mais variados níveis culturais que incluem,   \n");
     printf("como parte dos seus hábitos cotidianos, a consulta a um ou mais mecanismos  \n");
     printf("de adivinhação, mesmo que o façam apenas por diversão. Jornais, revistas e  \n");
     printf("sites na internet continuam a publicar diariamente horóscopos e demais adi- \n");
     printf("vinhações baseadas na Astrologia. O presente  projeto  tem como  objetivo   \n");
     printf("desenvolver um programa de computador que simule a realização de previsões  \n");
     printf("astrológicas, baseadas em dados reais do usuário, que serão  efetuadas uma  \n");
     printf("espécie de Cigana Virtual. \n");
    
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

void delay(int segundos) {
  int tempo = 300000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
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
	printf("***           1. Menu Signos                                        ***\n");
	printf("***           2. Menu Usuários                                      ***\n");
	printf("***           3. Menu Previsões                                     ***\n");
	printf("***           4. Sobre a Cigana-Virtual                             ***\n");
	printf("***           5. Sair do sistema                                    ***\n");
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
	printf("***           1. Consultar os Signos                                ***\n");
	printf("***           2. Consultar os Ascendentes                           ***\n");
	printf("***           3. Voltar ao Menu Principal                           ***\n");
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

void telaConsultaSigno(void){
	char diaNasc[3];
	char mesNasc[3];

	
	printf("página em desenvolvimento: 'telaConsultaSigno' - opção 1");
}

void telaConsultaAscendente(void){

	printf("página em desenvolvimento: 'telaConsultaAscendente' - opção 2");
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
	printf("***           4. Consultar                                          ***\n");
	printf("***           5. Voltar ao Menu Principal                           ***\n");
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

void telaCadastraUsuario(void) {
        
	char nome[60];
	char dataNasc[12];
	char sexo[2];
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
	printf("           Sexo ('F'-Feminino ou 'M'-Masculino):  ");
	scanf("%[A-Z a-z]", sexo);
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

void telaAtualizaUsuario(void){
	printf("página em desenvolvimento: 'telaAtualizaUsuario' - opção 2");
}

void telaExcluiUsuario(void){
	printf("página em desenvolvimento: 'telaExcluiUsuario' - opção 3");
}

void telaConsultaUsuario(void){
	printf("página em desenvolvimento: 'telaConsultaUsuario' - opção 4");
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
	printf("***           3. Excluir                                            ***\n");
	printf("***           4. Consultar                                          ***\n");
	printf("***           5. Voltar ao Menu Principal                           ***\n");
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


void telaCadastraPrevisao(void) {

	char signo[20];
	char dataInicial[6];
	char dataFinal[6];
	char previsao[501];
	
	printf(" \n");
    	printf(" \n");

    	printf("***********************************************************************\n");
    	printf("******** = = = = = Sistema de Gestão de Sortilégios = = = = = *********\n");
    	printf("***********************************************************************\n");
    
    	printf(" \n");
    	printf(" \n");
	printf("***********************************************************************\n");
	printf("***        ###############################################          ***\n");
	printf("***        ############  CADASTRAR PREVISÃO   ############          ***\n");
	printf("***        ###############################################          ***\n");
	printf("***                                                                 ***\n");
	printf("           DataInicial do Signo (dd/mm):  ");
	scanf("%[0-9/]", dataInicial);
	getchar();
	printf("           DataFinal do Signo (dd/mm):  ");
	scanf("%[0-9/]", dataFinal);
	getchar();
	printf("           Signo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", signo);
	getchar();
	printf("           Previsão: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", previsao);
	getchar();
	printf("***                                                                 ***\n");
	printf("***********************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaAtualizaPrevisao(void){
	printf("página em desenvolvimento: 'telaAtualizaPrevisão' - opção 2");
}

void telaExcluiPrevisao(void){
	printf("página em desenvolvimento: 'telaExcluiPrevisão' - opção 3");
}
 
void telaConsultaPrevisao(void){
	printf("página em desenvolvimento: 'telaConsultaPrevisão' - opção 4");
}


