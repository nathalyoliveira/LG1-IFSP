#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("SOMA");
	for (a=-1;a<=100;a=a+1)
	for (b=0;b<=100;b=b+1)
	a=a+b;
	{
		printf("\n%d", a);
	}

	getch ();
	return 0;
}



