#include<stdio.h>
#include<conio.h>


int main()
{
    int a[10],i, b[10];
    for(i=0;i<10;i++)
    {
        printf("Entre com os valores do vetor\n");
        scanf("%d", &a[i]);}
        for(i=9;i>0;--i)
        {
         b[i]=a[i];
		 printf("%d\n",b[i]);
		
		}

getch();
return 0;
}
