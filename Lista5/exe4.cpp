#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[12], b[12], c[12], i, j, x;
	
	for(i=0;i<12;++i)
	{
	 printf("DIGITE OS VALORES DO VETOR A:");
	 scanf("%d", &a[i]);
    }
    for(i=0;i<12;++i)
    for(j=i+1;j<12;++j)
    if(a[i]>a[j])
    {
    	x=a[i];
        a[i]=a[j];
        a[j]=x;
	}

printf("\n\n");

	for(i=0;i<12;++i)
	{
	  printf("VETOR A EM ORDEM CRESCENTE:%d\n", a[i]);
    }
   
printf("\n\n");   
   
    for(i=0;i<12;++i)
	{
     printf("DIGITE OS VALORES DO VETOR B:");
     scanf("%d", &b[i]);
    }
   	for(i=0;i<12;++i)
	for(j=i+1;j<12;++j)
	if (b[i]>b[j])
	{
		x=b[i];
		b[i]=b[j];
		b[j]=x;
	}
	
printf("\n\n");	
	
	for(i=0;i<12;++i)
	{
	 printf("VETOR B EM ORDEM CRESCENTE:%d\n", b[i]);
    }
	
	for(i=0;i<12;++i)
	{
    	c[i]=a[i]+b[i];
    }
    
printf("\n\n");	 
    
	for(i=0;i<12;++i)
	{
		printf("VETOR C EM ORDEM CRESCENTE:%d\n", c[i]);
	}
	
		
    getch ();
    return 0;
}
