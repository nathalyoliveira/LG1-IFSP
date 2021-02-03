#include<stdio.h>
#include<conio.h>


int main()
{
    int a[20],i, b[30], c[50];
    for(i=0;i<20;i++)
    {
        printf("Entre com os valores do vetor A:\n");
        scanf("%d", &a[i]);}
        
    for(i=0;i<30;i++)
    {
        printf("Entre com os valores do vetor B:\n");
        scanf("%d",&b[i]);}
        
        for(i=0;i<50;++i)
        {
        if(i<20){
        c[i]=a[i];
        printf("CONJUNTO A:%d\n",c[i]);}
        else {
        c[i]=b[i-30];
        printf("CONJUNTO B:%d\n",c[i]);}
	
}

        

getch();
return 0;
}

