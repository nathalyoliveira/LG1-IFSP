#include<stdio.h>
#include<conio.h>

int main()

{

float n1, n2, n3, media;
printf("Digite a nota do primeira nota:");
scanf("%f", &n1);
printf("Digite a nota do segunda nota:");
scanf("%f", &n2);
printf("Digite a nota do terceira nota:");
scanf("%f", &n3);
media=(n1+n2+n3)/3;
if (media>=6 )
printf("Aluno aprovado com media: %.2f", media);
else
printf("Aluno reprovado com media: %.2f", media);

getch ();
return 0;
	
}
