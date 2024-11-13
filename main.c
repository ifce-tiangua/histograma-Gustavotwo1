#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vet;
    int n, i;

    scanf("%d", &n);

    vet = (int)malloc(n*sizeof(int));

    for(i=0; i<n; i++){

        scanf("%d", &*(vet+i));

    }
    if(n==0){

        printf("[vazio]");
    }else{

        printf("[");

        for(i=0; i<n; i++){

            if(i==n-1){

                printf("%d", *(vet+i));

            }else{

                printf("%d, ", *(vet+i));

            }

        }

        printf("]");

    }

    free(vet);
    
    return 0;
}
