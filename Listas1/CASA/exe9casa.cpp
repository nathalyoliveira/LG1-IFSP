#include<stdio.h>
#include<stdio.h>

int main()

{
	
float p1, p2, ativ, media;
printf("Digite a nota da prova 1:");
scanf("%f", &p1);
printf("Digite a nota da prova 2:");
scanf("%f", &p2);
printf("Digite a nota das atividades do semestre:");
scanf("%f", &ativ);
media=((p1*4)+(p2*4)+(ativ*2))/10;
printf("A media final e: %f",media);

return 0;
}
