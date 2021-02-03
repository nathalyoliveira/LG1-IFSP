#include<stdio.h>
#include<conio.h>


int main()
{
    int a[8],i, b[8];
    for(i=0;i<6;i++)
    {
        printf("Entre com os valores do vetor\n");
        scanf("%d", &a[i]);}
        for(i=0;i<6;++i)
        {
         b[i]=a[i]*a[i];
		 printf("%d x %d= %d\n",a[i], a[i], b[i]);
		
		}

getch();
return 0;
}
