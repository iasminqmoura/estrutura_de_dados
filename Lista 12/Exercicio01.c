#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGURA 400
#define ALTURA 400

int imagem[ALTURA][LARGURA][3];
int saida[ALTURA][LARGURA];

int lerImagem(char *caminho) {
    char texto[256];
    int largura, altura;
    int i, j, k;

    FILE *arq = fopen(caminho, "r");
    if(arq == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return -1;
    }

    // Tipo
    fscanf(arq, " %[^\n]s", texto);
    if(strcmp(texto, "P3") != 0) {
        printf("A imagem nao esta no formato PPM.\n");
        return -2;
    }

    // Descricao
    fscanf(arq, " %[^\n]s", texto);
    printf("%s\n", texto);

    // Tamanho
    fscanf(arq, "%d %d", &largura, &altura);
    if(altura != ALTURA || largura != LARGURA) {
        printf("O tamanho da imagem nao bate com o do programa.\n");
        return -2;
    }

    // Escala
    int escala;
    fscanf(arq, "%d", &escala);
    if(escala != 255) {
        printf("A escala do arquivo nao bate com a do programa.\n");
        return -1;
    }

    // Ler
    for(j = 0; j < altura; j++) {
        for(i = 0; i < largura; i++) {
            for(k = 0; k < 3; k++) {
                fscanf(arq, "%d", &imagem[j][i][k]);
            }
        }
    }
    fclose(arq);
    return 1;
}

int escreverImagemPretoBranco(char *caminho, int altura, int largura, char *descricao) {
    int i, j, k;

    FILE *arq = fopen(caminho, "w");
    if(arq == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return -1;
    }

	// Escrever cabecalho
    fprintf(arq, "P2\n");
    fprintf(arq, "# %s\n", descricao);
    fprintf(arq, "%d %d\n", largura, altura);
    fprintf(arq, "255\n");
    
    // Escrever pixels
    for(j = 0; j < altura; j++) {
        for(i = 0; i < largura; i++) {
            fprintf(arq, "%d\n", saida[j][i]);
        }
    }
    
    fclose(arq);
    return 1;
}

int main() {
    printf("Carregando imagem...\n");
    if(lerImagem("pepito.ppm") != 1) {
        printf("Falha ao carregar imagem.\n");
        return -1;
    }

    int i, j;
    for(j = 0; j < ALTURA; j++) {
        for(i = 0; i < LARGURA; i++) {
            saida[j][i] = (imagem[j][i][0] + imagem[j][i][1] + imagem[j][i][2]) / 3;
        }
    }

    escreverImagemPretoBranco("resultados/Exercicio01.pgm", ALTURA, LARGURA, "Preto e branco");
    return 0;
}
