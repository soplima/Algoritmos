#include <stdio.h>

void vector_remove(int n, int vet1[], int pos){
    if (pos-1 >= n){
        return;
    }
    for (int i = 0; i<n; i++){
        if(vet1[i] = pos-1){
            vet1[i] = -1;
        }
    }
}