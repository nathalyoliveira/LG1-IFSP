#include<stdio.h>
#include<conio.h>
int main()
{
    int a[8], b[8],i, j,x, pesq, acha;
    for (i=0;i<8;++i)
    {puts("DIGITE OS VALORES DO VETOR A:");
    scanf("%d", &a[i]);
    {b[i]=a[i]*5;}}
    
    for(i=0;i<8;++i)
    for(j=i+1;j<8;++j)
    if(b[i]>b[j])
    {x=b[i];
    b[i]=b[j];
    b[j]=x;}
    
    for(i=0;i<8;++i)
   { printf("MATRIZ B: %d\n", b[i]);}
   
   
   
   puts("\nINFORME O NUMERO A SER PESQUISADO:");
   /*fflush(stdin); */
   scanf("%d", &pesq);
   
   
   acha=0;
   i=0;
   while(i<8&&acha==0)
    if(pesq==b[i]) 
    	acha=1;
    	else ++i;
    if (acha==1)
        printf("%d Foi localizado na posicao %d",pesq, i+1 );
        else puts("O NUMERO NAO FOI ENCONTRADO!!!");
   
   
   
   
  /* 
   for(i=0;i<8;++i)
   {
   	
   		if(pesq==b[i]) {	
     	printf ("%d Foi localizado na posicao %d",pesq, i );
   		}
   		else {
		   puts("O NUMERO NAO FOI ENCONTRADO!!!");}
   }  
 */
   
    getch ();
    return 0;
}
