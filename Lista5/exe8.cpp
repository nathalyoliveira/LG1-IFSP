#include<stdio.h>
#include<conio.h>
int main()
{
	int a[40], i, j, x, pesq, aux;
	for(i=0;i<40;++i)
	{
		printf("DIGITE AS NOTAS:");
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<40;++i)
	for(j=i+1;j<40;++j)
	if(a[i]>a[j])
	{
		x=a[i];
		a[i]=a[j];
		a[j]=x;
	}
	
printf("\n\n");
	
	for(i=0;i<40;++i)
	printf("NOTAS ORDENADAS:%d\n", a[i]);
	
printf("\n\n");
	
	printf("PESQUISA\n");
	printf("DIGITE A NOTA A SER PESQUISADA:");
	fflush(stdin); 
	scanf("%d", &pesq);
	
    aux=0;
	i=0;
    while(i<40&&aux==0)	
	if(pesq==a[i])
		aux=1;
	else ++i;	
	
	if(aux==1)
	printf("%d ENCONTRADO NA POSICAO:%d", pesq, i+1);
	else printf("NOTA NAO ENCONTRADO");

	
getch ();
return 0;
}
