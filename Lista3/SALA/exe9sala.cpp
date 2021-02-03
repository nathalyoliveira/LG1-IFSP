#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,e;
	printf("POTENCIA");
	printf("\nDIGITE A BASE:");
	scanf("%d", &b);
	printf("DIGITE O EXPOENTE:");
	scanf("%d", &e);
	
	
	a=pow(b,e);
	printf("%d ELEVADO A %d = %d", b,e,a);

		
	getch ();
	return 0;
}


