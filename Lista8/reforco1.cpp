#include<stdio.h>
#include<conio.h>

int aponte(int px, char pnome, float py)
{
	/*px = px + 10;
	pnome = pnome - 14;
	py = py + 2;*/
	printf("px: %c \npnome: %c \n py: %c" , px, pnome, py);
}

int main()
{
    int x, *px;
    char nome, *pnome;
    float y, *py;
    
    px=&x;
    pnome=&nome;
    py=&y;
    
    aponte(*px, *pnome, *py);
   
   getch();
   return 0;
}
