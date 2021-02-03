#include<stdio.h>
#include<conio.h>

int main()
{
	int a,n;
	printf("DIVISORES DE QUATRO");
	
	for (a=1;a<=200;a=a+1)
	if (a%4==0)
	{
		printf("\n%d", a);
	}

	getch ();
	return 0;
}


