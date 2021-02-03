#include<stdio.h>
#include<conio.h>

int main()

{

float a, b, c;
printf("Digite tres numeros:");
scanf("%f %f %f", &a, &b, &c);
if ((a<b)&&(a<c)&&(b<c))
printf("Os valores em ordem crescente sao: %.2f %.2f %.2f", a, b, c);
else if((a<b)&&(a<c)&&(c<b))
printf("Os valores em ordem crescente sao: %.2f %.2f %.2f",a, c, b);
else if((b<a)&&(b<c)&&(a<c))
printf("Os valores em ordem crescente sao: %.2f %.2f %.2f", b, a, c);
else if((b<a)&&(b<c)&&(c<a))
printf("Os valores em ordem crescente sao: %.2f %.2f %.2f", b,c,a);
else if((c<a)&&(c<b)&&(a<b))
printf(" Os valores em ordem crescente sao: %.2f %.2f %.2f", c,a,b);
else 
printf("Os valores em ordem crescente sao: %.2f %.2f %.2f", c,b,a);


getch ();
return 0;
	
}
