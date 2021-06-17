#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main(){
    int idade1, idade2;
    char nome1[99], nome2[99];
    double idadeMedia;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 99);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 99);
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (idade1+idade2)/2;

    printf("\n");
    printf("Idade media: %.1lf", idadeMedia);
}
