#include<stdio.h>
#include<conio.h>

int main()

{

float a,b,c,x1,x2,delta;
printf("Equa�ao de segundo grau.");
printf("Exiba o coeficitente A:");
scanf("%f", &a);
printf("Exiba o coeficiente B:");
scanf("%f", &b);
printf("Exiba o coeficiente C:");
scanf("%f", &c);
if (a!=0){
delta=(b*b)-(4*a*c);
if (delta<0)
printf("A equa�ao nao tem solu�ao.");
else
if (delta==0){
x1=(-b)/2*a;
x2=x1;
printf("A equa�ao tem duas raizes reais e iguais: %.2f %.2f", x1, x2);}
else{
x1=(-b+(delta*0,5)/(2*a));
x2=(-b-(delta*0,5)/(2*a));
printf("A equa�ao tem duas raizes reais e diferentes: %.2f %.2f", x1, x2);}
}
else
printf("Nao e uma equa�ao de segundo grau.");

getch ();
return 0;
	
}
