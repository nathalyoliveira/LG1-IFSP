#include<stdio.h>
#include<conio.h>
#include<string.h>


int i, j, k, op, soma[20];
float med[20];
struct cad 
{
char nome[60];
int nota[4];
};
struct cad x[20], aux;

         	int cadastro(){
     		for(i=0;i<20;++i){
            printf("Nome:");
            fflush(stdin);
            fgets(x[i].nome,60,stdin);
            for(k=0;k<4;++k){
            printf("Nota:");
            scanf("%d", &x[i].nota[k]);}
            printf("\n\n");
            
            
            }}
            
            
            
            int exibir()
		    {
		  	printf("REGISTROS");printf("\n\n");
		  
		   for(i=0;i<20;++i)
		   {
		   	printf("\n");
		   	printf("NOME:"); puts(x[i].nome);	
            for(k=0;k<4;++k){		
		   	printf("NOTAS: %i", x[i].nota[k]); printf("\n");}	
		   	printf("\n\n");	
		   }
	        }
            
            
            
            
               int classificacao()
	        	{
	         	for(i=0;i<20;++i)
	         	for(j=i+1;j<20;++j)
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
           while ((i<20)&&(acha==0)){
        
            if(strcmp(nom,x[i].nome)==0) 
            acha=1;
            else ++i;
        }
            if (acha==1)
            {
             printf("Nome:");
            fflush(stdin);
            fgets(x[i].nome,60,stdin);
            for(k=0;k<4;++k){
            printf("Nota:");
            scanf("%d", &x[i].nota[k]);}
            printf("\n\n");
                }
        	else printf ("NAO ENCONTRADO");
            printf("\n\n");
           }
           
           
           
           
           int pesquisa()
           {char nom[60];
           fflush(stdin);
		   int acha;
            printf("Entre com o nome do registro a ser pesquisado:");
     	    fflush(stdin);
            fgets(nom,60,stdin);
        
           i=0;
           acha=0;     
           while ((i<20)&&(acha==0)){
        
            if(strcmp(nom,x[i].nome)==0) 
            acha=1;
            else ++i;
        }

            if (acha==1)
            {
            printf("\n");
		   	printf("NOME:"); puts(x[i].nome);	
            for(k=0;k<4;++k)		
		   	printf("NOTAS: %i\n", x[i].nota[k]); printf("\n");	
		   	printf("\n\n");	
                }
                	else printf ("NAO ENCONTRADO");
            printf("\n\n");
           }
           
           
           int media()
           {int soma;
           for(i=0;i<20;++i){
            soma=0;
           for(k=0;k<4;++k){
           soma=(soma+x[i].nota[k]);
           }med[i]=soma/4;
           }
        }
        
                
                
                
            int listaa(){  
            media();
            for(i=0;i<20;++i)
            if (med[i]>6)
            { printf("\n");
		   	printf("NOME:"); puts(x[i].nome);
            printf("MEDIA: %6.2f", med[i]); 	
		   	printf("\n\n");	}}
        
           	
            int listar(){   
            media();
            for(i=0;i<20;++i)
            if (med[i]<7)
            { printf("\n");
		   	printf("NOME:"); puts(x[i].nome);
            printf("MEDIA: %6.2f", med[i]); printf("\n");	
		   	printf("\n\n");	
        }}


int main()
{	

     do{  
	    
    printf("ESCOLHA UMA DAS OPCOES ABAIXO: \n\n 1- Cadastro \n 2- Classificacao \n 3- Alteracao de Resgistro \n 4- Pesquisa \n 5- Alunos Aprovados \n 6- Alunos Reprovados\n 7- Sair\n");
    scanf("%d", &op);
    printf("\n\n");
	 
	    switch (op){
     	case 1: cadastro();break;
     	case 2: classificacao();break;
     	case 3: alteracao();break;
     	case 4: pesquisa();break;
     	case 5: listaa();break;
     	case 6: listar();break;
    }

    
}while (op<7);

    getch();   
    return 0;
}
