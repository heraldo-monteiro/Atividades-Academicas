/*	
Materia: Logica Aplica		Turma: 1º J
Professor: Marcelo		
*/

#include <stdio.h>
#include <stdlib.h>
#include "bits/stdc++.h" // Biblioteca usada para pegar o valor de PI


int main() {
	
	printf("\n|----------------------------------------|\n"); 
	printf("|Nome: JOSE HERALDO DA SILVA MONTEIRO    |");	
	printf("\n|Turma: 1 J \t"); 
	printf("|Turno: VESPERTINO       |");	
	printf("\n|----------------------------------------|\n"); 	
	
		printf("				    MENU DE OPCOES \n");
		printf("				    -------------- \n"); 
		printf("|--------------------------------------------------------------------------------------------|\n"); 
		printf("|[1] Area de um Circulo     |   [2] Area de um Trapezio    |   [3] Area de um Triangulo      |\n");
		printf("|------------------------       ------------------------       ------------------------------|\n"); 
		printf("|[4] Area de um Retangulo   |   [5] Area de um Quadrado    |   [6] Tensao de um Resistor     |\n");
		printf("|------------------------       ------------------------       ------------------------------|\n");
		printf("|[7] Media de 5 Notas  	    |   [8] Distancia Percorrida   |   [9] Resistencia de um Condutor|\n");
		printf("|------------------------       ------------------------       ------------------------------|\n"); 
		printf("|--------------------------------------------------------------------------------------------|\n"); 
		printf("OBS: Os valores informado desde opcao [1] ate a opcao [5] estarao como a unidade de medida em \n");
		printf("centimetro. \n");	
		printf("|--------------------------------------------------------------------------------------------|\n"); 
		
		
		int opcao;
		
		
		while(true){	
			printf("\n");
			printf("Escolha uma opcao ou digite ZERO[0] para sair! \n");
			printf("OPCAO: ");		
			scanf("%d",& opcao); 
			printf("\n");
			
			
			if(opcao == 1){	
				printf("-----------------------------------\n");
				printf("- Calculando a Area de um Circulo -\n"); 
				printf("-----------------------------------\n");				
				float raio = 0;
				float area = 0;				
				double pi = 2 * acos(0.0);
				
				printf("INFORME OS DADOS A SEGUIR: \n");	
				printf("Raio: "); scanf("%f",& raio);	
			
				area = pi*(raio*raio);
				printf("\n");
				printf("A Area do Circulo e: %.2f",area); printf(" cm2 \n");	
				
			printf("|--------------------------------------------------------------------------------------------|\n");  
									
			}else if(opcao == 2){
				printf("------------------------------------\n");
				printf("- Calculando a Area de um Trapezio -\n");
				printf("------------------------------------\n");
				float baseMaior = 0;
				float baseMenor = 0;
				float altura = 0;
				float area = 0;
				
				printf("INFORME OS DADOS A SEGUIR: \n");	
				printf("Base Maior: "); scanf("%f",& baseMaior);
				printf("Base Menor: "); scanf("%f",& baseMenor);				
				printf("Altura: ");  scanf("%f",& altura);
				
				area = ((baseMaior + baseMenor)*altura)/2;
				printf("\n");
				printf("A Area do Trapezio e de: %.2f", area);	printf(" cm2 \n");		
				
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 
								
			}else if(opcao == 3){
				printf("-------------------------------------\n");
				printf("- Calculando a Area de um Triangulo -\n");
				printf("-------------------------------------\n");
				float base = 0;		
				float altura = 0;	
				float area = 0;	
							
				printf("INFORME OS DADOS A SEGUIR: \n");					
				printf("Base: "); scanf("%f",& base);	
				printf("Altura: "); scanf("%f",& altura);	
								
				area = (base*altura)/2; 
				printf("\n");
				printf("A area do Triangulo e de: %.2f ",area); printf("cm2 \n");	
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 			
		
			}else if(opcao == 4){
				printf("-------------------------------------\n");				
				printf("- Calculando a Area de um Retangulo -\n");
				printf("-------------------------------------\n");
				float base = 0;
				float altura = 0;
				float area = 0;	
							
				printf("INFORME OS DADOS A SEGUIR: \n");
				printf("Base: "); scanf("%f", & base);
				printf("Altura: "); scanf("%f",& altura );	
								
				area = (base * altura);
				printf("\n");
				printf("A Area do Retangulo e de: %.2f", area); printf(" cm2 \n");		
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 	
								
			}else if(opcao == 5){
				printf("------------------------------------\n");
				printf("- Calculando a Area de um Quadrado -\n");
				printf("------------------------------------\n");
				float lado = 0;			
				float area = 0;
				
				printf("INFORME OS DADOS A SEGUIR: \n");				
				printf("Lado: "); scanf("%f",& lado);
						
				area = lado*lado;
				printf("\n");
				printf("A area do quadrado e de: %.2f ",area); printf("cm2 \n");			
			
			printf("|--------------------------------------------------------------------------------------------|\n"); 		
				
			}else if(opcao == 6){
				printf("--------------------------------------\n");
				printf("- Calculando a Tensao de um Resistor -\n");
				printf("--------------------------------------\n");
				float U = 0;
				float R = 0;
				float I = 0;
				
				printf("INFORME OS DADOS A SEGUIR: \n");
				printf("[R] Resistencia: "); scanf("%f",& R);	
				printf("[I] Corrente: "); scanf("%f",& I);		
				
				U = (R * I);
				printf("\n");
				printf("A Tensao do Resistor e de: %.2f", U); printf(" V \n");
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 
								
			}else if(opcao == 7){
				printf("---------------------------------\n");
				printf("- Calculando a Media de 5 Notas -\n");
				printf("---------------------------------\n");
				float nota1 = 0;
				float nota2 = 0;
				float nota3 = 0;
				float nota4 = 0;
				float nota5 = 0;
				float media = 0;
				
				printf("INFORME OS DADOS A SEGUIR: \n");	
				printf("Primeira Nota: "); scanf("%f",& nota1);
				printf("Segunda  Nota: "); scanf("%f",& nota2);
				printf("Terceira Nota: "); scanf("%f",& nota3);
				printf("Quarta   Nota: "); scanf("%f",& nota4);
				printf("Quinta   Nota: "); scanf("%f",& nota5);
				
				media = (nota1+nota2+nota3+nota4+nota5)/5;
				printf("\n");
				printf("A Media e: %.2f", media); printf("\n");
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 		
				
			}else if(opcao == 8){
				printf("------------------------------------\n");
				printf("- Calculando a Distancia Percorida -\n");
				printf("------------------------------------\n");
				float tempo = 0;						
				float distancia = 0;	
				float velocidade = 0;	
							
					printf("INFORME OS DADOS A SEGUIR: \n");
					printf("Velocidade: "); scanf("%f",& velocidade);				
					printf("Tempo: "); scanf("%f",& tempo);	
						
					distancia = (velocidade * tempo);
					printf("\n");
					printf("A Distancia Percorrida e de: %.2f", distancia); printf(" km \n");	
																
			printf("|--------------------------------------------------------------------------------------------|\n"); 
								
			}else if(opcao == 9){
				printf("-------------------------------------------\n");
				printf("- Calculando a Resistencia de um Condutor -\n");
				printf("-------------------------------------------\n");
								// [R= p L/A]
				float R = 0;     				  // [R] RESISTENCIA    [r] 
				float P = 0; 	// 1,72 . 10^-2	  // [P] RESISTIVIDADE  [r.m]
				float L = 0;  	// 120 			  // [L] COMPRIMENTO	[m]	
				float A = 0; 	// 0,50           // [A] ÁREA TRANVESAL [mm2]
				
				printf("INFORME OS DADOS A SEGUIR: \n");
				printf("[P] Resistividade  Ohm.mm2: "); scanf("%f", & P);
				printf("[L] Comprimento m: "); scanf("%f", & L);				
				printf("[A] Area mm: "); scanf("%f", & A);
																
				R = P * (L/A);
				R = R * (pow(10,-2));
				
				printf("\n");												
				printf("A Resistencia do Condutor e de: %.2f Ohm", R); printf("\n");
				
			printf("|--------------------------------------------------------------------------------------------|\n"); 		
				
			}else if(opcao == 0){
				printf("\n");
				printf("Sistema Encerrado!");
				exit(0);
				
			}else{
				printf("\n");
				printf("Opcao não encontrada! tente novamente! ou digite ZERO[0] para sair \n");	
				printf("|--------------------------------------------------------------------------------------------|\n");			
			}	
	
		}
		return 0;
}
