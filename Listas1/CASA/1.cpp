/*
  Crie  um  programa  que  permita  fazer  a  conversão  cambial  entre  Reais  eDólares. 
  Considere  como  taxa  de  câmbio  US$1,00  =  R$2,40.  
  Leia  um  valor  emReais  pelo teclado e mostre o correspondente em Dólares.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
float dolar,real;
printf("Digite o valor em reais:");
scanf("%f", &real);
dolar=real/2.40;
printf("O valor em Dólares e:%f", dolar);

getch();
return 0;
}
