/*Aula 2 Projetos e analise de algoritmos 1*/

/*Para cada item, escreva uma função que receba um vetor v de números inteiros, e uma
variável n que indica o tamanho do vetor e determina:*/

#include<stdio.h>

/*o maior número da lista*/
int encontra_maior(int v[], int n){
    int maior = v[0]; 
    for(int i = 1; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior; 
}

/*o menor número da lista*/
int encontra_menor(int v[], int n){
    int menor = v[0]; 
    for(int i = 1; i < n; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    return menor; 
}

/*a quantidade de números pares da lista*/
int conta_numeros_pares(int v[], int n){
    int contador = 0; 
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            contador++;
        }
    }
    return contador; 
}

/*a média dos números contidos na lista*/
float calcular_a_media(int v[], int n){
    float soma = 0.0; 
    for(int i = 0; i < n; i++){
        soma = soma + v[i];
    }
    return soma/n;
}

/* todos os números menores do que a média calculada no item anterior. Neste item,
apenas imprima os valores na tela*/
void imprime_num_menores_que_media(int v, int n){
    float media = calcular_a_media(v, n);
    for(int i = 0; i < 0; i++){
        if(v[i] < media){
            printf("%d ", v[i]);
        }
    }
    printf("\n"); 
}

int main(){
    int v[10] = {5, 3, 8, 11, 21, 44, 51, 23, 10, 9};
    printf("O maior elemento do vetor: %d\n", encontra_maior(v, 10));
    printf("O menor elemento do vetor: %d\n", encontra_menor(v, 10));
    printf("Quantidade de numeros pares: %d\n", conta_numeros_pares(v, 10));
    printf("A media dos numeros é %.2f\n", calcular_a_media(v, 10));
    imprime_num_menores_que_media(v,10); 
}