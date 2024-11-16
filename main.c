#include <stdio.h>
#include <stdlib.h>

void preencherHistograma(char* histo[], int valor, int categoria );
void exibirHistograma(char* histo[], int valor[], int categoria);

int main(){

    
    int Categorias, i;
    scanf("%d", &Categorias);

    char *histograma[Categorias];
    int Quantidade[Categorias];

    for(i=0; i<Categorias; i++){

        scanf("%d", &Quantidade[i]);

        if(Quantidade[i] == 0){

            histograma[i] = NULL;

        }else{

            histograma[i] = (char *) malloc(Quantidade[i]* sizeof(char));
            preencherHistograma(histograma, Quantidade[i], i);

        }

    }

    exibirHistograma(histograma, Quantidade, Categorias);

    for(i=0; i<Categorias; i++){

        free(histograma[i]);

    }

    return 0;

}

void preencherHistograma(char* histo[], int valor, int categoria){

    int i;

    for(i=0; i<valor; i++){

        histo[categoria][i] = '*';

    }

}

void exibirHistograma(char* histo[], int valor[], int categoria){

    int i, j;
    
    for(i=0; i<categoria; i++){

        printf("%d ", valor[i]);
        for(j=0; j<valor[i]; j++){

            printf("%c", histo[i][j]);
            

        }

        printf("\n");

    }

}
