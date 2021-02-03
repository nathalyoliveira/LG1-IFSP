#include<stdio.h>
#include<conio.h>

int main()

{

float sb, sl, hs, adic;
printf("Digite o salario bruto:");
scanf("%f", &sb);
printf("Digite as horas trabalhadas:");
scanf("%f", &hs);

if (hs>160){
hs=hs-160;
adic=(sb/160)+(hs*0.50);
sb=adic+sb;
}
if(sb<800.00){

sl=sb;
printf("O salario liquido e: %.2f", sl); 
}
else{
if ((sb>=800.00)&&(sb<=1600))
sl=(sb-(sb*0.13));
printf("O salario liquido e: %.2f", sl);
}
getch ();
return 0;
	
}
