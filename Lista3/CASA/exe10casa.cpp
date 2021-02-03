#include<stdio.h>
#include<conio.h>
int main ()
{
	char op;
	int a, b, res;
    printf("Informe a eperacao aritmetica:");
    scanf("%c", &op);
    printf("\nDigite dois numeros:");
    scanf("%d %d", &a, &b);
    
    if (op=='+')
    res=a+b;
    
    else
    if (op=='-')
    res=a-b;
    
    else
    if (op=='*')
    res=a*b;
    
    else
    res=a/b;
    
    printf("\nRESULTADO %d", res);

getch ();
return 0;
 
}
