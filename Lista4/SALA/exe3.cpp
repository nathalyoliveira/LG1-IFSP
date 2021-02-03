#include<stdio.h>
#include<conio.h>


int main()
{
    int a[5],i, b[5], c[5];
    for(i=0;i<5;i++)
    {
        printf("Entre com os valores do vetor A:\nEntre com os valores do vetor B:\n");
        scanf("%d %d", &a[i], &b[i]);}
              
        for(i=0;i<5;++i)
        {
        c[i]=a[i]-b[i];
        printf("%d - %d = %d\n",a[i], b[i], c[i]);

        }

getch();
return 0;
}
