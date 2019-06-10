#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    int qtd, min, max, maiusculas, minusculas, especiais, numeros;
    int i, j, t, tam, rnd;
    char senha[1024];
    
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    FILE *arq = fopen("resultados/senhas.txt", "a");
    if(arq == NULL) {
        printf("Falha ao abrir arquivo.\n");
        return -1;
    }

    printf(">>>> Gerador de senhas aleat�rias <<<<\n\n");

    printf("Informe a quantidade de senhas: ");
    scanf("%d", &qtd);
    
    printf("Informe a quantidade m�nima de caracteres das senhas: ");
    scanf("%d", &min);

    printf("Informe a quantidade m�xima de caracteres das senhas: ");
    scanf("%d", &max);

    printf("As senhas ter�o letras ma�usculas? (1 para sim, 0 para n�o): ");
    scanf("%d", &maiusculas);
    maiusculas %= 2;

    printf("As senhas ter�o letras min�sculas? (1 para sim, 0 para n�o): ");
    scanf("%d", &minusculas);
    minusculas %= 2;

    printf("As senhas ter�o caracteres especiais? (1 para sim, 0 para n�o): ");
    scanf("%d", &especiais);
    especiais %= 2;

    printf("As senhas ter�o n�meros? (1 para sim, 0 para n�o): ");
    scanf("%d", &numeros);
    numeros %= 2;

    rnd = maiusculas + minusculas + especiais + numeros;
    if(rnd == 0) {
        printf("N�o existe combinacao de caracteres sem caracteres.\n");
        return 0;
    }

    printf("Gerando e gravando senhas em 'resultados/senhas.txt'\n");
    for(i = 0; i < qtd; i++) {
        tam = min + (rand() % (max - min + 1));
        for(j = 0; j < tam; j++) {
            t = rand() % rnd;
            
            if(t == 0) {
                if(maiusculas == 1) {
                    senha[j] = 'A' + (rand() % ('Z' - 'A' + 1));
                }
                else if(minusculas == 1) {
                    senha[j] = 'a' + (rand() % ('z' - 'a' + 1));
                }
                else if(especiais == 1) {
                    senha[j] = ':' + (rand() % ('@' - ':' + 1));
                }
                else {
                    senha[j] = '0' + (rand() % ('9' - '0' + 1));
                }
            }
            else if(t == 1) {
                if(minusculas == 1) {
                    senha[j] = 'a' + (rand() % ('z' - 'a' + 1));
                }
                else if(especiais == 1) {
                    senha[j] = ':' + (rand() % ('@' - ':' + 1));
                }
                else {
                    senha[j] = '0' + (rand() % ('9' - '0' + 1));
                }
            }
            else if(t == 2) {
                if(especiais == 1) {
                    senha[j] = ':' + (rand() % ('@' - ':' + 1));
                }
                else {
                    senha[j] = '0' + (rand() % ('9' - '0' + 1));
                }
            }
            else {
                senha[j] = '0' + (rand() % ('9' - '0' + 1));
            }
        }

        senha[j] = '\0';
        fprintf(arq, "%s\n", senha);
    }
    fclose(arq);
    return 0;
}
