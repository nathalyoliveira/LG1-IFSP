#include<stdio.h>
#include<conio.h>

int main()
{
float a,b,c;
printf("O valor A:");
scanf("%f", &a);
printf("O valor B:");
scanf("%f", &b);
c=a;
a=b;
b=c;
printf("O valor de A é:%f", a, "O valor de B e: %.2f", b);

getch();
return 0;
}
