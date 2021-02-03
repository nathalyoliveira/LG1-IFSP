#include<stdio.h>
#include<stdio.h>

int main()

{
	
float imc, massa, altura;
printf("Digite a massa:");
scanf("%f", &massa);
printf("Digite a altura:");
scanf("%f", &altura);
imc=massa/(altura*altura);
printf("O IMC resultante e: %f", imc);

return 0;
}
