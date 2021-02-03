#include<stdio.h>
#include<conio.h>

int soma();
int soma(int n){
    int i;
    int som=0;
    for (i=1;i<=n;++i)
    som=som+i;
    printf("SOMA = %d", som);
    return 0; }

int main()
{
    
    int n;
    
    printf("Digite o valor limite");
    scanf("%d", &n);
    soma(n);
   
   getch();
   return 0;
}
    
