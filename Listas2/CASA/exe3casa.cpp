#include<stdio.h>
#include<conio.h>

int main()

{

int v;
float nota, conta, media;
printf("Digite a nota");
scanf("%f", &nota);
v = (nota*100);
conta=(v%100);
if(conta>=60)
media=nota-conta/100+1;

else
media=nota-conta/100;
printf("A media do aluno e: %.2f", media);

getch ();
return 0;
	
}
