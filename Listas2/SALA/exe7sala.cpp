#include<stdio.h>
#include<conio.h>

int main()

{

float n, x;
printf("O valor de N e:");
scanf("%f", &n);
if (n<0)
x=(n*-1);
else
x=n;

printf("O valor do modulo deste numero e: %.2f", x);

getch ();
return 0;
	
}
