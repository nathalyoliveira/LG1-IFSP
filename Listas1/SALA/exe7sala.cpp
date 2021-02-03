#include<stdio.h>
#include<conio.h>

int main()
{
float coelhos,custo;
printf("Digite a quantidade de coelhos");
scanf("%f", &coelhos);
custo=(coelhos*0.70)/18+10;
printf("O valor do custo sera de: %.2f", custo);

getch();
return 0;
}
