#include<stdio.h>
#include<conio.h>

int i, a[30], b[30], c[60];

int matra();
int matra()
{
    printf("ENTRE COM A:");
    for(i=0;i<30;++i)
    scanf ("%d", &a[i]);
}

int matrb();
int matrb()
{
    printf("ENTRE COM B:");
    for(i=0;i<30;++i)
    scanf ("%d", &b[i]);
}

int jun();
int jun(int a[30], int b[30])
{
    for(i=0;i<60;++i)
    if(i<30)
    c[i]=a[i];
    else 
    c[i]=b[i-30];

}

int ex();
int ex()
{
    for(i=0;i<60;++i)
    printf("%d\n", c[i]);
}

int main()
{
    
    matra();
    matrb();
    jun(a, b);
    ex();
    
    getch();
    return 0;
}
