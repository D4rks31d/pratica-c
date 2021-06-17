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

int main()
{
    int n;

    printf("Quantos alunos serao digitados? ");
    scanf("%i", &n);

    char nome[n][50];
    double nota1[n], nota2[n], medNota;

    for (int i=0;i<n;i++)
    {
        printf("Digite nome, primeira e segunda nota do %io aluno:\n", i+1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        scanf("%lf %lf", &nota1[i], &nota2[i]);
    }

    printf("\nAlunos aprovados:\n");

    for (int i=0;i<n;i++)
    {
        medNota=(nota1[i]+nota2[i])/2;
        if (medNota>=6)
        {
            printf("%s\n", nome[i]);
        }
    }
}
