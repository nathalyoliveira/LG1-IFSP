#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7], b[7], c[7][2],i,j;
	
	for(i=0;i<7;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ A:");
		scanf("%d", &a[i]);
	}
	for(i=0;i<7;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<7;++i)
	for(j=0;j<2;++j)
	{
	c[i][0]=a[i];
	c[i][1]=b[i];
	printf("MATRIZ C:%d\n", c[i][j]);
    }

  getch ();
  return 0;
}

