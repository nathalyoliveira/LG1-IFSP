#include<stdio.h>
#include<conio.h>

int main()
{
float f,c;
printf("Entre com a temperatura em Fahrenheit:");
scanf("%f", &f);
c=(f-32)/1.8;
printf("A temperatura em graus centigrados é:%.2f", c);

getch();
return 0;
}
