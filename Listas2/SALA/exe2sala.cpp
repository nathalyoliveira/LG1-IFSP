#include<stdio.h>
#include<conio.h>

int main()

{

float n1,n2, ne, media, nm;
printf("Digite a primeira nota:");
scanf("%f", &n1);
printf("Digite a segunda nota:");
scanf("%f", &n2);
media= (n1+n2)/2;
if (media >=6)
printf("Aluno aprovado com media: %.2f", media);
else
printf("Digite a nota do exame:");
scanf("%f", &ne);
nm=(ne+media)/2;
if (nm>=5)
printf("Aluno aprovado em exame com media: %.2f", nm);
else
printf("Aluno reprovado com media: %.2f", nm);
getch ();
return 0;
	
}
