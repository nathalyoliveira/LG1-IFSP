#include<stdio.h>
#include<conio.h>
int main()
{
	
	int rai[9], ran[9], i;
	for (i=0;i<9;i++)
	{
		printf("DIGITE OS VALORES DO RA INICIAL:\n");
		scanf("%d", &rai[i]);
	}    printf("RA NOVO:");
	
	for (i=0;i<9;i++)
	{
		ran[0]=rai[1];
		ran[1]=rai[0];
		ran[2]=rai[2];
		ran[3]=rai[3];
		ran[4]=rai[4];
		ran[5]=rai[5];
		ran[6]=rai[6];
		ran[7]=rai[8];
		ran[8]=rai[7];
	
	printf("%d", ran[i]);
	}
	
	getch ();
	return 0;
	
}
