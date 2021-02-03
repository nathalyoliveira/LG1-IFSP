#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4], b[4], c[4][2],i,j;
	
	for(i=0;i<4;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ A:");
		scanf("%d", &a[i]);
	}
	for(i=0;i<4;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<4;++i)
	for(j=0;j<2;++j)
	{
	c[i][0]=a[i]*2;
	c[i][1]=b[i]-5;
	printf("MATRIZ C:%d\n", c[i][j]);
    }

  getch ();
  return 0;
}

