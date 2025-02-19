#include <stdio.h>

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux; 
}

void inverter(int v[], int n){
    int ini = 0, fim = n - 1; 
    while (ini < fim) {
        troca(v, ini, fim);
        ini++; fim--;
    }
}

void mostrar_vetor(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    inverter(v, 10);
    mostrar_vetor(v, 10);
}