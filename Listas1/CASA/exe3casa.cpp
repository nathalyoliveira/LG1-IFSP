#include<stdio.h>
#include<stdio.h>

int main()
{
	
float ap, lp, aa, la,r1,r2, r;
printf("Digite a largura do azulejo:");
scanf("%f", &la);
printf("Digite a altura do azulejo:");
scanf("%f", &aa);
printf("Digite a largura da parede:");
scanf("%f", &lp);
printf("Digite a altura da parede:");
scanf("%f", &ap);
la=la/100;
aa=aa/100;
r1=la*aa;
r2=lp*ap;
r=r1/r2;
printf("A quantidade de azulejos necessaria e %f", r);

return 0;

}
