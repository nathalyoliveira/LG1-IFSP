#include<stdio.h>
#include<conio.h>

int main()
{
float altura, raio, volume;
printf("Digite altura da lata:");
scanf("%f",&altura);
printf("Digite o raio da lata:");
scanf("%f", &raio);
volume=3.14159*raio*raio*altura;
printf("O volume da lata é%f", volume);

getch();
return 0;

}
