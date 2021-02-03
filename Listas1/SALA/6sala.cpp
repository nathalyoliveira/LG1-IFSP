#include<stdio.h>
#include<conio.h>

int main()
{
float pa, pv, taxa, tempo;
printf("Digite o valor da prestação");
scanf("%f", &pv);
printf("Digite o valor da taxa de juros");
scanf("%f", &taxa);
printf("Digite o tempo em atraso");
scanf("%f", &tempo);
pa=pv+(pv*(taxa/100)*tempo);
printf("O valor da prestação em atraso e: %.2f", pa);

getch();
return 0;
}
