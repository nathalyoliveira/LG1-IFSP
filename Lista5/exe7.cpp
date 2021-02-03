#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20], b[20], i, j, x, pesq, aux;
	for(i=0;i<20;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ A:");
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<20;++i)
	b[i]=a[i]+2;
	
	for(i=0;i<20;++i)
	for(j=i+1;j<20;++j)
	if(b[i]>b[j])
	{
		x=b[i];
		b[i]=b[j];
		b[j]=x;
	}
	
printf("\n\n");
	
	for(i=0;i<20;++i)
	printf("MATRIZ B:%d\n", b[i]);
	
printf("\n\n");
	
	printf("PESQUISA\n");
	printf("DIGITE O NUMERO A SER PESQUISADO:");
	fflush(stdin); 
	scanf("%d", &pesq);
	
    aux=0;
	i=0;
    while(i<20&&aux==0)	
	if(pesq==b[i])
		aux=1;
	else ++i;	
	
	if(aux==1)
	printf("%d ENCONTRADO NA POSICAO:%d", pesq, i+1);
	else printf("VALOR NAO ENCONTRADO");

	
getch ();
return 0;
}
