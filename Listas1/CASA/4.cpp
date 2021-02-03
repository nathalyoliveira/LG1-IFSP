#include<stdio.h>
#include<stdio.h>

int main()

{
	
float a, b, area, perimetro;
printf("digite a medidado lado A do triangulo:");
scanf("%f", &a);
printf("Digite a medida do lado B do triangulo:");
scanf("%f", &b);
area= a*b;
printf("A area do triangulo e: %.2f", area);
perimetro=2*a+2*b;
printf("O perimetro do retangulo e: %.2f", perimetro);

return 0;
}
