#include<stdio.h>
#include<conio.h>

int main ()
{
float distancia, tempo, velocidade, litros;
printf("Digite o tempo gasto da viagem:");
scanf("%f", &tempo);
printf("Digite a velocidade m�dia");
scanf("%f", &velocidade);
distancia=tempo*velocidade;
litros=distancia/velocidade;
printf( "Os valores s�o: %.2f %.2f %.2f %.2f , tempo, velocidade, distancia, litros");

getch();
return 0;
}
