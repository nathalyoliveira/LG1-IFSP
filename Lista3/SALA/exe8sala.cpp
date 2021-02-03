#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c;
	printf("FIBONACCI\n");
	printf("1");
	
	a=0;
	for (b=1;b<610;b)
	
	{
		c=b;
		b=b+a;
		a=c;
		printf("\n%d",b);
	}
	
	
	getch ();
	return 0;
}

