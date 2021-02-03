#include<stdio.h>
#include<conio.h>

int main()
{
	int a,n;
	printf("PRODUTO");
	printf("\nDIGITE UM NUMERO MENOR OU IGUAL A 50:");
	scanf("%d", &n);
	
	for (a=n;a<=250;a=a*3)
	
	{
		printf("\n%d", a);
	}

	getch ();
	return 0;
}


