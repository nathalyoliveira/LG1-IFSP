#include<stdio.h>
#include<stdio.h>

int main()

{
	
float s, tempo, so, vo, a;
so=2;
vo=2;
a=10;
printf("Digite o tempo (segundos):");
scanf("%f", &tempo);
s=(so+vo)*tempo+((1/2)*a*(tempo*tempo));
printf("O valor do movimento uniforme variado e: %f", s);

return 0;
}
