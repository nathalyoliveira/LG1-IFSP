#include<stdio.h>
#include<conio.h>
int main ()
{
int n, r, a;
printf("Escolha um numero:");
scanf ("%d", &n);
a=1;
while(a<=10){
	r=n*a;
	printf("%d X %d = %d\n", n, a, r);
	a=a+1;
}
getch ();
return 0;
 
}
