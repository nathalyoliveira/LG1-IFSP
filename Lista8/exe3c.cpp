#include<stdio.h>
#include<conio.h>




int pres();
int pres(float a, float b, float t)
{
   float c;
   c= a + (a * ( b/100 ) * t );
   printf("%6.2f\n", c);
}



int main()
{
    int i, t, a, b;
    
    printf("ENTRE COM O VALOR:");
    scanf ("%d", &a);
    
    printf("ENTRE COM A TAXA DE JUROS:");
    scanf ("%d", &b);
    
    printf("ENTRE COM O TEMPO:");
    scanf ("%d", &t);
    
    pres(a, b, t);
    
    getch();
    return 0;
}
