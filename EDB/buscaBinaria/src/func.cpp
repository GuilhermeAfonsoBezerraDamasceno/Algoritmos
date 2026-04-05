#include "../include/func.h"

int buscaBinaria(int* vetor, int tam, int chave){
    int inicio = 0, fim = tam;
    int meio = (inicio + fim)/2;

    while(inicio <= fim){
        if(vetor[meio] == chave){
            return meio;
        }else{
            if(vetor[meio] < chave){
                inicio = meio + 1;
            }else{
                if(vetor[meio] > chave){
                    fim = meio - 1;
                }
            }
        }
        meio = (inicio + fim)/2;
    }
    return -1;
}