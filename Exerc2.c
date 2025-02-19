/*Escreva uma função que verifique se um vetor está em ordem crescente. Caso o vetor
esteja em ordem crescente retorne True, e False caso contrário*/

#include <stdio.h>
#include <stdbool.h>

bool esta_em_ordem_crescente(int v[], int n){
    for (int i = 0; i < n-1; i++){
        if(v[i] > v[i+1]){
            return false;
        }
    }
    return true; 
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(esta_em_ordem_crescente(v, 10) == true){
        printf("Está em ordem crescente.");
    } else{
        printf("Não está em ordem crescente. ");
    }
    return 0;
}