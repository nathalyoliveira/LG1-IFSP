#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[20], b[30], c[50], i, j, x;
	
	for(i=0;i<20;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ A:");
		scanf("%d", &a[i]);
	}
	
printf("\n\n");	
	
	for(i=0;i<30;++i)
	{
		printf("DIGITE OS VALORES DA MATRIZ B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<50;++i)
	{
		if(i<20)
		c[i]=a[i];
		else
		c[i]=b[i-20];
	}
	
	for(i=0;i<50;i++)
	for(j=i+1;j<50;j++)
	if(c[i]<c[j])
	{
		x=c[i];
		c[i]=c[j];
		c[j]=x;
	}
	
printf("\n\n");

	for(i=0;i<50;i++)
	printf("MATRIZ C:%d\n", c[i]);
	
	
getch ();
return 0;
}
