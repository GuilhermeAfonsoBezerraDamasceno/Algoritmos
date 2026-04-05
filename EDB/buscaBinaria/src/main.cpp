#include <iostream>
#include <stdlib.h>
#include "../include/func.h"

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int tam = sizeof(vetor) / sizeof(int);
    int chave;

    std::cout << "Digite a chave: ";
    std::cin >> chave;

    int indice = buscaBinaria(vetor, tam, chave);
    if(indice != -1){
        std::cout << "O indice eh: " << indice << std::endl;
    }else{
        std::cout << "Chave não encontrada" << std::endl;
    }
    return 0;
}