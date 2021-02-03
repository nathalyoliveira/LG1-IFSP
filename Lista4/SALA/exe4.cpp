#include<stdio.h>
#include<conio.h>


int main()
{
    int a[5],i, b[5], c[10];
    for(i=0;i<5;i++)
    {
        printf("Entre com os valores do vetor A:\nEntre com os valores do vetor B:\n");
        scanf("%d %d", &a[i], &b[i]);}
        
        for(i=0;i<10;++i)
        {
        if(i<5){
        c[i]=a[i];
        printf("CONJUNTO A:%d\n",c[i]);}
        else {
        c[i]=b[i-5];
        printf("CONJUNTO B:%d\n",c[i]);}
	
}

        

getch();
return 0;
}

