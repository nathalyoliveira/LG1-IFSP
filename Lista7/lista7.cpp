#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    
    int op, i, j, ida,acha, tele;
    struct cad 
    
            {
                 char nome[60], rua[60], bairro[60];
                 int idade, tel, cep, ncasa;
            };
            struct cad x[5], aux;
     do{     
    printf("ESCOLHA UMA DAS OPCOES ABAIXO: \n\n 1- Cadastro \n 2- Pesquisa \n 3- Classificacao \n 4- Alteracao de Resgistro \n 5- Sair\n");
    scanf("%d", &op);
    
    printf("\n\n");
    
     switch(op){
     case 1:
            
            //cadastro//
            
            for(i=0;i<5;++i){
            fflush(stdin);
            printf("Nome:");
            fflush(stdin);
            fgets(x[i].nome,60,stdin);
            printf("Idade:");
            scanf("%d", &x[i].idade);
            printf("Telefone:");
            scanf("%d", &x[i].tel);
            printf("Rua:");
            fflush(stdin);
            fgets(x[i].rua,60,stdin);
            printf("Bairro:");
            fflush(stdin);
            fgets(x[i].bairro,60,stdin);
            printf("Nº da casa:");
            scanf("%d", &x[i].ncasa);
            printf("Cep:");
            scanf("%d", &x[i].cep);
            printf("\n\n");
            }
            break;
            
            //pesquisa//
                
     case 2:
     	printf("Entre com a idade a ser pesquisada:");
     	scanf("%d", &ida);
     	
     	i=0;
     	acha=0;
     	while ((i<5)&&(acha==0))
         {
        	if(ida==x[i].idade){ 
                acha=1;
                break;}
     	    ++i;
         }
     	     if (acha==1)
     	 {
     	      printf("ENCONTRADO \n\nNome:"); puts(x[i].nome);
     	      printf("Idade: %i\n", x[i].idade);
         } else printf ("NAO ENCONTRADO");
     	       printf("\n\n");
     
     	
     	/*
     	for(i=0;i<2;++i){
     	if(ida==x[i].idade)
     	{
		 printf("ENCONTRADO \n\n Nome:"); puts(x[i].nome);
     	printf("Idade: %i\n", x[i].idade);
     	break;
        }
     	else printf ("NAO ENCONTRADO");
     	printf("\n\n");
 	    }
       */ break;
    
	    printf("\n\n");
	    
	    //classificaçao dos dados//
     
	 case 3:
	 	 for(i=0;i<5;++i)
	 	 for(j=i+1;j<5;++j)
	 	 if(strcmp(x[i].nome, x[j].nome)>0)
	 	 {
	 	 	aux=x[i];
	 	 	x[i]=x[j];
	 	 	x[j]=aux;
		  }
		  
		  //REGISTROS//
		  
		  	printf("REGISTROS");printf("\n\n");
		  
		   for(i=0;i<5;++i)
		   {
		   	printf("NOME:"); puts(x[i].nome);	
		   	printf("IDADE: %i", x[i].idade); printf("\n");	
		   	printf("TELEFONE: %i", x[i].tel); printf("\n");	
		   	printf("RUA:"); puts(x[i].rua); 	
		   	printf("BAIRRO:"); puts(x[i].bairro);
		   	printf("N DA CASA: %i", x[i].ncasa); printf("\n");	
		   	printf("CEP: %i", x[i].cep); printf("\n");	
		   	printf("\n\n");	
		   }
		  
		  break;
		  
		  // alterar//
		  
	 case 4:
            printf("Entre com o numero de telefone do registro a ser alterado:");
     	    scanf("%d", &tele);
     	    
     	    i=0;
        	acha=0;
     	    while ((i<5)&&(acha==0))
             {
        	     if(tele==x[i].tel)
               	 acha=1;
        	     else ++i;
             }
        	if (acha==1)
        	{
               fflush(stdin);
               printf("Nome:");
               fflush(stdin);
               fgets(x[i].nome,60,stdin);
               printf("Idade:");
               scanf("%d", &x[i].idade);
               printf("Telefone:");
               scanf("%d", &x[i].tel);
               printf("Rua:");
               fflush(stdin);
               fgets(x[i].rua,60,stdin);
               printf("Bairro:");
               fflush(stdin);
               fgets(x[i].bairro,60,stdin);
               printf("Nº da casa:");
               scanf("%d", &x[i].ncasa);
               printf("Cep:");
               scanf("%d", &x[i].cep);
               printf("\n\n");
            }
        	else printf ("NAO ENCONTRADO");
        	printf("\n\n");
	 break;
   
     case 5: printf("ENCERRANDO"); break; return 0;
    
}}while (op<5);
    getch();   
    return 0;
}

