#include<stdio.h>
#include<conio.h>

int main()

{

float a, b, c;
printf("Digite tres valores para os lados de um triangulo:");
scanf("%f %f %f", &a, &b, &c);

if((a<b+c)&&(b<c+a)&&(c<a+b)){
if((a==b)&&(b==c))
printf("Estes valores formam um triangulo equilatero."); 

else
if((a==b)||(a==c)||(b==c))
printf("Esses valores formam um triangulo isosceles.");
else
printf("Esses valores formam um triangulo escaleno.");}

getch ();
return 0;
	
}

