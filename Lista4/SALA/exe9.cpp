#include<stdio.h>
#include<conio.h>


int main()
{
    int a;
    
do{
        printf("Entre com o codigo de acesso do curso:\n");
        scanf("%d", &a);
        
        switch (a){

        case 1: printf ("ENGENHARIA\n");break; 
        case 2: printf ("EDIFICACOES\n");break;
        case 3: printf ("SISTEMA ELETRICO\n");break;
        case 4: printf ("TURISMO\n");break;
        case 5: printf ("ANALISE DE SISTEMAS\n");break;
        default: printf ("CODIGO INVALIDO\n");break;
	}
		}while(a);

getch();
return 0;
}
