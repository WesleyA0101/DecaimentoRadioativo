#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float massa;
    int tempo = 0;

    printf("Digite a massa do material em gramas: ");
    scanf("%f", &massa);

    while(massa >= 0.05){
        massa = massa / 2;
	tempo += 50;
    
    }

    printf("O tempo de corrida foi de %d segundos.\n\n", tempo);
    printf("Massa final %.2f\n", massa);

}
