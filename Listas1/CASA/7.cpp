#include<stdio.h>
#include<stdio.h>

int main()

{
	
float area, volume, raio;
printf("Digite o raio da esfera:");
scanf("%f", &raio);
volume=(4/3)*3.1416*(raio*raio*raio);
area=4*3.1416*(raio*raio);
printf("O volume da esfera e: %f", volume);
printf("A  area da esfera e: %f", area);

return 0;
}
