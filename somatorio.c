/*
Arquivo: somatorio.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 3
*/

#include <stdio.h>

void imprimeSoma(float * vetor, int tam);

int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    float vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o %dº elemento: ", i+1);
        scanf("%f", vetor+i);
    }

    imprimeSoma(vetor, N);
    
    return 0;
}

void imprimeSoma(float * vetor, int tam){
    int a=0;
    float soma=0;
    for(int i=0; i<tam; i++){
        soma += vetor[i];

        printf("%s %g ", a==1? "+":"", vetor[i]);
        if(a==0)
        a=1;
    }
    printf("= %g\n", soma);
    
}