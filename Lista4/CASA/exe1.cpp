#include<stdio.h>
#include<conio.h>
int main()
{
	
	int rav[9], rac[9], i;
	for (i=0;i<9;i++)
	{
		printf("DIGITE OS VALORES DO RA VIRUS:\n");
		scanf("%d", &rav[i]);
	}    printf("RA CORRETO:");
	
	for (i=0;i<9;i++)
	{
		rac[0]=rav[0];
		rac[1]=rav[1];
		rac[2]=rav[7];
		rac[3]=rav[6];
		rac[4]=rav[4];
		rac[5]=rav[5];
		rac[6]=rav[2];
		rac[7]=rav[3];
		rac[8]=rav[8];
	
	printf("%d", rac[i]);
	}
	
	getch ();
	return 0;
	
}

