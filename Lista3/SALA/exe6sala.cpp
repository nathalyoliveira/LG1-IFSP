#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b;
	printf("QUADRADO");	
	for (a=15;a<=200;a=a+1)
	{
		b=pow(a,2);
		printf("\n%d x %d = %d", a,a,b);
	}
	getch ();
	return 0;
}

