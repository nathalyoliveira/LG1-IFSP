#include<stdio.h>
#include<conio.h>


int main()
{
    int a[6],i, b[6], y;
    for(i=0;i<6;i++)
    {
        printf("Entre com os valores do vetor\n");
        scanf("%d", &a[i]);}
        for(i=0;i<6;++i)
        {
       b[i]=1;
        for(y=a[i]; y>=1; y--)
        {
         b[i]=b[i]*y;
        }
		  printf("FATORIAL= %d\n",b[i]);}

getch();
return 0;
}

/*
int x,b,c;
printf("\n\nDigite um numero:");
        scanf("%d", &x);
        
        for(b=x-1; b>=1; b--)
        {
            x=x *b;}
            printf ("RESULTADO= %d\n", x);
    
*/

//1 8 5 9 - valores
//0 1 2 3 - i
