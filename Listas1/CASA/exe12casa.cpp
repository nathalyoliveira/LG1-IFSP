#include<stdio.h>
#include<stdio.h>

int main()

{
	
float despaco, dtempo, vm, sfinal, sinicial, tfinal, tinicial;
printf("Digite o espaço inicial do corpo:");
scanf("%f", &sinicial);
printf("Digite o espaço final do corpo:");
scanf("%f", &sfinal);
printf("Digite o tempo inicial do corpo:");
scanf("%f", &tinicial);
printf("Digite o tempo final do corpo:");
scanf("%f", &tfinal);
dtempo=tfinal-tinicial;
despaco=sfinal-sinicial;
vm=despaco/dtempo;
printf("A velocidade media e: %f", vm);

return 0;
}
