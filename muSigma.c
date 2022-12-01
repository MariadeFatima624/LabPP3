/*
Arquivo: muSigma.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Médio 1
*/

#include <stdio.h>


int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    float vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o %dº elemento: ", i+1);
        scanf("%f", vetor+i);
    }

    printf("%g", Calculamedia(vetor, N));
    printf("%g", Calculadesvpad(vetor, N));
    
    return 0;
}

float Calculamedia(float * vetor, int tam){
    media
}