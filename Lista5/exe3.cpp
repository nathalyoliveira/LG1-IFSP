#include<stdio.h>
#include<conio.h>
int main()
{
    int a[15], b[15],i, j,x, y;
    for (i=0;i<15;++i)
    {puts("DIGITE OS VALORES DO VETOR A:");
    scanf("%d", &a[i]);}
    for(i=0;i<15;++i)
    {
        b[i]=1;
        for(y=a[i]; y>=1; y--)
        {b[i]=b[i]*y;}
	}
   
 

   for(i=0;i<15;++i)
    for(j=i+1;j<15;++j)
    if(b[i]>b[j])
    {x=b[i];
    b[i]=b[j];
    b[j]=x;}
    
    for(i=0;i<15;++i)
   { printf("FATORIAL MATRIZ B: %d\n", b[i]);}
   
   
   
    getch ();
    return 0;
}

