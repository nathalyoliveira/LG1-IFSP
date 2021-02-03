#include<stdio.h>
#include<conio.h>
#include<string.h>

int i,op, j;
char pesq[60];
	struct cad 
    {
    char nome[60], end[100];
    int tel;
    };
    struct cad x[5], aux;

         	int cadastro(){
     		for(i=0;i<5;++i){
            printf("Nome:");
            fflush(stdin);
            fgets(x[i].nome,60,stdin);
            printf("Endereco:");
            fflush(stdin);
            fgets(x[i].end,100,stdin);
            printf("Telefone:");
            scanf("%d", &x[i].tel);
            printf("\n\n");
            }}


		int exibir()
		{
		  	printf("REGISTROS");printf("\n\n");
		  
		   for(i=0;i<5;++i)
		   {
		   	   printf("\n");
		   	printf("NOME:"); puts(x[i].nome);		
		   	printf("ENDERECO:"); puts(x[i].end);	
		   	printf("TELEFONE: %i", x[i].tel); printf("\n");	
		   	printf("\n\n");	
		   }
	     }



        int pesquisa() //nomes//
		{
        printf("Nome a ser pesquisado:");
        fflush(stdin);
        fgets(pesq,60,stdin);
        for(i=0;i<5;++i)
        if (strcmp(x[i].nome,pesq)==0)
        {
     		printf("NOME:"); puts(x[i].nome);		
		   	printf("ENDERECO:"); puts(x[i].end);	
		   	printf("TELEFONE: %i", x[i].tel); printf("\n");	
		   	printf("\n\n");	
        }
		printf("\n\n");
		}

        int classificacao()
		{
		for(i=0;i<5;++i)
	 	for(j=i+1;j<5;++j)
	 	if(strcmp(x[i].nome, x[j].nome)>0)
	 	{
	 	 	aux=x[i];
	 	 	x[i]=x[j];
	 	 	x[j]=aux;
		}
		exibir();
		printf("\n\n");	
	    }


		  int alteracao()
		  {char nom[60];
		  int acha;
            printf("Entre com o nome do registro a ser alterado:");
     	    fflush(stdin);
            fgets(nom,60,stdin);
        
           i=0;
           acha=0;     
           while ((i<5)&&(acha==0)){
        
            if(strcmp(nom,x[i].nome)==0) 
            acha=1;
            else ++i;
        }
            if (acha==1)
            {
             printf("Nome:");
            fflush(stdin);
            fgets(x[i].nome,60,stdin);
            printf("Endereco:");
            fflush(stdin);
            fgets(x[i].end,100,stdin);
            printf("Telefone:");
            scanf("%d", &x[i].tel);
            printf("\n\n");
                }
        	else printf ("NAO ENCONTRADO");
            printf("\n\n");
           }


         int remover()
         {
         	char rem[60];
            printf("Entre com o nome do registro a ser removido:");
     	    fflush(stdin);
            fgets(rem,60,stdin);
             for(i=0;i<5;++i)
            if(strcmp(x[i].nome,rem)==0)
            x[i]=x[5];
		 }


int main()
{

     do{  
	    
    printf("ESCOLHA UMA DAS OPCOES ABAIXO: \n\n 1- Cadastro \n 2- Pesquisa \n 3- Classificacao \n 4- Alteracao de Resgistro \n 5- Remocao de elementos \n 6- Sair\n");
    scanf("%d", &op);
    printf("\n\n");
	 
	    switch (op){
     	case 1: cadastro();break;
     	case 2: pesquisa();break;
     	case 3: classificacao();break;
     	case 4: alteracao();break;
     	case 5: remover();break;
    }

    
}while (op<6);
    getch();   
    return 0;
}
