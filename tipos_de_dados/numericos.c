#include <stdio.h>

int main(int argc, char* argv[]){
    int idade = 30;
    float altura = 1.72;
    float peso = 79.805;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Digite a altura: ");
    scanf("%f", &altura);
    getchar();

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    getchar();0
    
    double dobro_peso = peso * 2.0;
    printf("O dobro do peso eh: %.2f", dobro_peso);
    return 0;
}