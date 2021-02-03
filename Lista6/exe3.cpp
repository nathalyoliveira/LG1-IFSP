#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[10], c[10][3],i,j, y;
	
	for(i=0;i<10;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ A:");
		scanf("%d", &a[i]);
	}

	for(i=0;i<10;++i)
	for(j=0;j<3;++j)
	{
	c[i][0]=a[i]+5;
	
	
    {
        c[i][1]=1;
        for(y=a[i]; y>=1; y--)
        {c[i][1]=c[i][1]*y;}
	}
	
	c[i][2]=pow(a[i],2);
	printf("MATRIZ C:%d\n", c[i][j]);
    }

  getch ();
  return 0;
}

