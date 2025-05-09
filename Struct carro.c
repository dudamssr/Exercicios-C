//Biblioteca
#include<stdio.h>

 typedef struct {
     char modelo[30];
     int ano;
     float preço;
 } Carro;
 
 int main() {
     Carro carro1;
 
 printf ("Digite o modelo do carro: ");
 scanf ("%[^\n]", carro1.modelo);
 
 printf ("Digite o ano do carro:");
 scanf ("%d", &carro1.ano);
 
 printf("Digite o preço do carro:");
 scanf("%f", &carro1.preço);
 
     printf("Modelo: %s\n", carro1.modelo);
     printf("Ano: %d\n", carro1.ano);
     printf("Preço: %.2f\n", carro1.preço);
 
     
    return 0;
}


