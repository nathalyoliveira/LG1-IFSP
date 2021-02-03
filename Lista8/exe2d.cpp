#include<stdio.h>
#include<conio.h>
#include<math.h>

int pot();
int pot(int b, int e ){
    int c;
    c=pow(b,e);
    printf("resultado = %d \n", c);
    return 0; }

int main()
{
    
    int b, e;
    
    printf("Digite a base");
    scanf("%d", &b);
    
    printf("Digite o expoente");
    scanf("%d", &e);
    
    pot(b, e);
   
   getch();
   return 0;
}
    
