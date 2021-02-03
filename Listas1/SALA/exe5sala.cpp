#include<stdio.h>
#include<conio.h>

int main()
{
float numero, quadrado;
printf("Digite um numero inteiro");
scanf("%f", &numero);
quadrado= numero*numero;
printf("O quadrado deste numero e: %.2f", quadrado);

getch();
return 0;
}
