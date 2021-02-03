#include<stdio.h>
#include<conio.h>


int main()
{
    int a;
    
do{
        printf("Entre com o numero do mes:\n");
        scanf("%d", &a);
        
        switch (a){
        case 0: printf ("ENCERRANDO O PROGRAMA!\n"); return 0;break;
        case 1: printf ("JANEIRO\n");break; 
        case 2: printf ("FEVEREIRO\n");break;
        case 3: printf ("MARCO\n");break;
        case 4: printf ("ABRIL\n");break;
        case 5: printf ("MAIO\n");break;
        case 6: printf ("JUNHO\n");break;
        case 7: printf ("JULHO\n");break;
        case 8: printf ("AGOSTO\n");break;
        case 9: printf ("SETEMBRO\n");break;
        case 10: printf ("OUTUBRO\n");break;
        case 11: printf ("NOVEMBRO\n");break;
        case 12: printf ("DEZEMBRO\n");break;
	}
		}while(a<=12);

getch();
return 0;
}




