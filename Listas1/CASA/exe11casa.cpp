#include<stdio.h>
#include<stdio.h>

int main()

{
	
float a, b, c;
printf("Digite o valor A:");
scanf("%f", &a);
printf("Digite o valor B:");
scanf("%f", &b);
a=a+b;
b=a-b;
a=a-b;
printf("Novo valor A: %f", a);
printf("Novo valor B: %f", b);

return 0;
}
