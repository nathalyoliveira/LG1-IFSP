#include<stdio.h>
#include<conio.h>

int main(){
    float v1,v2, dif;
    printf("Digite dois valores numericos:");
    scanf("%f %f",  &v1, &v2);
    if (v1==v2){
        
    
        printf("Os numeros digitados sao iguais, entao nao ha diferenças entre eles");
        } 
    else{
        if (v1<v2){
        dif=v2-v1;
        }
    else{
         dif=v1-v2;
        }
       }
    printf("\nA diferença entre os numeros e: %.2f", dif);


getch ();
return 0;
	
}
