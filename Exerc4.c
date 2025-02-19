/*Escreva uma função que receba um vetor e, sem utilizar qualquer vetor auxiliar, coloque
os números pares no início do vetor e os números ímpares no final do vetor.*/

#include<stdio.h>

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[i];
    v[j] = aux;
}

void separa_pares_e_impares(int v[], int n){
    int ini = 0, fim = n - 1;
    while (ini > fim){
        if(v[ini] % 2 == 0) ini++;
        else if (v[fim] % 2 == 1) fim--;
        else if(ini < fim){ 
            troca(v, ini, fim);
            ini++; fim--;
        }
    }  
}

int mostra_vetor(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n"); 
} 

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    separa_pares_e_impares(v, 10);
    mostra_vetor(v, 10);
}