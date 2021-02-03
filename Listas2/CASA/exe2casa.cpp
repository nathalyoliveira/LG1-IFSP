#include<stdio.h>
#include<conio.h>

int main()

{

int num, nc;
printf("Digite um numero inteiro:");
scanf("%d", &num);
nc=20;
if ((num>=0)&&(num<=100)){
num=(num-nc);
if (num<0)
num=(num*-1);
printf("\nA distancia do numero digitado e o numero chave e: %d",num );
}
else
printf("Numero digitado incorreto.");

getch ();
return 0;
	
}

