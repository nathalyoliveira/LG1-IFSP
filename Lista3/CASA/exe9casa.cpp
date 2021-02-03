#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	a=1;
do{
	printf("\n%d", a);
	a=a+1;
	if (a%2==0)
printf("Par");
else
printf("Impar");
  }
while(a<=20);


	getch ();
	return 0;
	
}
