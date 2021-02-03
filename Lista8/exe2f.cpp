#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	int a,b,c;
	printf("FIBONACCI\n");
	printf("1");
	
	a=0;
	for (b=1;b<=(n-2);b)
	
	{
		c=b;
		b=b+a;
		a=c;
		printf("\n%d",b);
	}
}

int main()
{
	int n;
	printf("DIGITE O NUMERO DE TERMOS");
	scanf("%d", &n);
	
	fib(n);
	
	getch ();
	return 0;
}

