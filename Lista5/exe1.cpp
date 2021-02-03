#include<stdio.h>
#include<conio.h>
int main()
{
    int a[12],i, j,x;
    for (i=0;i<12;++i)
    {puts("DIGITE OS VALORES DO VETOR A:");
    scanf("%d", &a[i]);}

    for(i=0;i<12;++i)
    for(j=i+1;j<12;++j)
    if(a[i]<a[j])
    {x=a[i];
    a[i]=a[j];
    a[j]=x;}
    
    for(i=0;i<12;++i)
   { printf("MATRIZ DECRESCENTE: %d\n", a[i]);}
   
    getch ();
    return 0;
}
   
