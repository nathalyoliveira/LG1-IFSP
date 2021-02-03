#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b;
	printf("SOMA");
		
	for (a=-2;a<=500;a=a+2)
	for (b=0;b<=500;b=b+2)
	a=a+b;
	
	
	{
		printf("\n%d",a);
	}
	
	
	getch ();
	return 0;
}

