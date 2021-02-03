#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b;
	printf("POTENCIA");
	
		
	for (a=0;a<=15;a=a+1)
	{
		b=pow(3,a);
		printf("\n 3 elevado a %d = %d",a,b);
	}
	getch ();
	return 0;
}

