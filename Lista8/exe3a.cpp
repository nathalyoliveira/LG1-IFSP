#include<stdio.h>
#include<conio.h>

int soma(int n)
{int a, b;

for (a=-1;a<=n;a=a+1)
	for (b=0;b<=n;b=b+1)
	a=a+b;
	printf("%d", a);
}

int main()
{
	int n;
	printf("DIGITE O NUMERO MAXIMO");
	scanf("%d", &n);
	
	soma(n);
	
	getch ();
	return 0;
}
