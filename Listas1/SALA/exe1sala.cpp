#include<stdio.h>
#include<conio.h>

int main ()
{
float distancia, tempo, velocidade, litros;
printf("Digite o tempo gasto da viagem:");
scanf("%f", &tempo);
printf("Digite a velocidade média");
scanf("%f", &velocidade);
distancia=tempo*velocidade;
litros=distancia/velocidade;
printf( "Os valores são: %.2f %.2f %.2f %.2f , tempo, velocidade, distancia, litros");

getch();
return 0;
}
