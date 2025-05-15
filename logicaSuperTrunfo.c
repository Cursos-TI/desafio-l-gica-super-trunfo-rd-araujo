#include <stdio.h>

    int main() {

        /* valores que precisam de números "quebrados"
            Área: exibida em .3f km^2
            População: .3f Milhões 
        Densidade populacional e outra fita
        */

       /* Valores que precisam de string
            Código da cidade: X0Y
            Nome da cidade:
            Número de Pontos Turísticos:
            Produto Interno Bruto (PIB): $ xxxx unidade de medida ( milhão, bilhão, trilhão)
       */
    

            char nome1[50]; // Nome da Cidade

            char cdg1[4]; // Código da cidade (XYZ)

            int npt1; // Número de pontos turísticos

            int pnt1 =0;

            float pib1;// Valor do Produto Interno Bruto

            float area1; //Área do País

            float pplc1; // População do País

            double ppc1;
             
            double dsd1; //densidade demográfica

	    int atb1;

	    int atb2;

            
            char nome2[50]; // Nome da Cidade

            char cdg2[4]; // Código da cidade (XYZ)

            int npt2; // Número de pontos turísticos

            int pnt2 =0;

            float pib2;// Valor do Produto Interno Bruto

            float area2; //Área do País

            float pplc2; // População do País

            double ppc2;
             
            double dsd2; //densidade demográfica



            

                //linha 1*****************************

                    printf("*****DADOS DA CIDADE 1****** \n");

                    printf("Digite o nome da cidade 1: \n");
                    scanf(" %[^\n]%*c", nome1); // limpa o '\n' do buffer

                    printf("Informe o código da cidade 1: \n");
                    scanf(" %s", cdg1);

                    printf("Informe o número de pontos turísticos da cidade 1: \n");
                    scanf(" %d", &npt1);

                    printf("Informe o PIB da cidade 1: \n");
                    scanf(" %f", &pib1);

                    printf("Informe a área da cidade (em km^2) 1: \n");
                    scanf(" %f", &area1); 

                    printf("Informe a população da cidade 1: \n");
                    scanf(" %f", &pplc1);



                ppc1 =  pib1 / pplc1;

                dsd1 = pplc1 / area1;

                //linha 2*********************************************************************************
                
                
                    printf("*****DADOS DA CIDADE 2****** \n");

                    printf("Digite o nome da cidade 2: \n");
                    scanf(" %[^\n]%*c", nome2);

                    printf("Informe o código da cidade 2: \n");
                    scanf(" %s", cdg2);

                    printf("Informe o número de pontos turísticos da cidade 2: \n");
                    scanf(" %d", &npt2);

                    printf("Informe o PIB da cidade 2: \n");
                    scanf(" %f", &pib2);

                    printf("Informe a área da cidade (em km^2) 2: \n");
                    scanf(" %f", &area2); 

                    printf("Informe a população da cidade 2: \n");
                    scanf(" %f", &pplc2);
                  


                ppc2 =  pib2 / pplc2;

                dsd2 = pplc2 / area2;


               // linha 3**************************************************     


            printf("************CADASTRO*************** \n ");
            printf("Nome da Cidade: %s \n", nome1);
            printf("Código da Cidade: %s \n", cdg1);
            printf("Pontos Turísticos: %d \n", npt1);
            printf("Produto Interno Bruto (PIB): %.2f milhões \n", pib1);
            printf("Área da Cidade: %.3f Kilômetros quadrados. \n", area1); 
            printf("População: %.1f \n", pplc1);
            printf("Densidade populacional: %.2f hab/km² \n", dsd1); 
            printf("Pib per Capita: %.3f \n", ppc1);

                    
            printf("*************************** \n ");
            printf("Nome da Cidade: %s \n", nome2);
            printf("Código da Cidade: %s \n", cdg2);
            printf("Pontos Turísticos: %d \n", npt2);
            printf("Produto Interno Bruto (PIB): %.2f milhões \n", pib2);
            printf("Área da Cidade: %.3f Kilômetros quadrados. \n", area2); 
            printf("População: %.1f \n", pplc2);
            printf("Densidade populacional: %.2f hab/km² \n", dsd2); 
            printf("Pib per Capita: %.3f \n", ppc2);

            
         
            printf("***************************ESCOLHA DE ATRIBUTOS***************\n");
	    printf("1- Pontos turísticos\n");
	    printf("2- PIB\n");
	    printf("3- Área da Cidade\n");
	    printf("4- Popualação\n");
	    printf("5- Densidade\n");
	    printf("6- Pib per Capita\n");
	    printf("Escolha o primeiro atributo:\n");
	    scanf("%d", &atb1);

         // **INÍCIO DA VALIDAÇÃO DO SEGUNDO ATRIBUTO**
        do {
        printf("Escolha o segundo atributo (diferente do primeiro):\n");
        scanf("%d", &atb2);

            if (atb2 == atb1) {
            printf("Atenção: o segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
    }
            } while (atb2 == atb1); 
            // **FIM DA VALIDAÇÃO DO SEGUNDO ATRIBUTO**


        switch (atb1) {
            case 1:
                printf("Número de pontos turísticos: \n");
                if (npt1 > npt2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (npt1 < npt2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { // Caso de igualdade
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 2:
                printf("PIB: \n");
                if (pib1 > pib2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (pib1 < pib2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 3:
                printf("Área: \n");
                if (area1 > area2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (area1 < area2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 4:
                printf("População: \n");
                if (pplc1 > pplc2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (pplc1 < pplc2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 5:
                printf("Densidade Populacional: \n");
                if (dsd1 < dsd2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (dsd1 > dsd2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 6:
                printf("Pib Per Capita: \n");
                if (ppc1 > ppc2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (ppc1 < ppc2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            default:
                printf("opção nn correspondida\n");
        }

        switch (atb2) {
            case 1:
                printf("Número de pontos turísticos: \n");
                if (npt1 > npt2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (npt1 < npt2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { // Caso de igualdade
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 2:
                printf("PIB: \n");
                if (pib1 > pib2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (pib1 < pib2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 3:
                printf("Área: \n");
                if (area1 > area2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (area1 < area2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 4:
                printf("População: \n");
                if (pplc1 > pplc2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (pplc1 < pplc2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 5:
                printf("Densidade Populacional: \n");
                if (dsd1 < dsd2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (dsd1 > dsd2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            case 6:
                printf("Pib Per Capita: \n");
                if (ppc1 > ppc2) {
                    printf("+10 pontos para %s\n", nome1);
                    pnt1 += 10;
                } else if (ppc1 < ppc2) {
                    printf("+10 pontos para %s\n", nome2);
                    pnt2 += 10;
                } else { 
                    printf("+5 pontos para cada\n");
                    pnt1 += 5;
                    pnt2 += 5;
                }
                break;
        
            default:
                printf("opção nn correspondida\n");
        }


				       

            printf("***********RESULTADO********** \n");
            printf("Pontuação %s: %d\n", nome1, pnt1);
            printf("Pontuação %s: %d\n", nome2, pnt2);

            if (pnt1 > pnt2)
            {
                printf("O Vencedor é: %s !!\n", nome1);
             } else if (pnt1 < pnt2) {
                printf("O Vencedor é: %s!!\n" , nome2);
            } else { 
                printf("EMPATE!!");
            }



            return 0;


    }