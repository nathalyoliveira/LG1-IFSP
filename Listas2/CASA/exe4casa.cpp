#include<stdio.h>
#include<conio.h>

int main()

{

float a, b, c;
printf("Digite tres valores:");
scanf("%f %f %f", &a, &b, &c);
if ((a>b)&&(b>c))
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", a, b, c);
else
if (a>c>b)
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", a, c ,b);
else
if((b>a)&&(a>c))
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", b, a, c);
else
if((b>c)&&(c>a))
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", b, c, a);
else
if((c>b)&&(b>a))
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", c, b, a);
else
printf("O valor maior, o valor do meio e o valor menor sao respectivamente: %.2f %.2f %.2f", c, a, b);

getch ();
return 0;
	
}

