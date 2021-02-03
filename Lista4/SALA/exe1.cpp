#include<stdio.h>
#include<conio.h>


int main()
{
    int a[5],i, b[5];
    for(i=0;i<5;i++)
    {
        printf("Entre com os valores do vetor\n");
        scanf("%d", &a[i]);}
        for(i=0;i<5;++i)
        {
        b[i]=a[i]*3;
        printf("%d x 3 = %d\n", a[i],b[i]);
        
        }

getch();
return 0;
}
