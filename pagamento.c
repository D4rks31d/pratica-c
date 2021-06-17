#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char nome[50];
    int horas;
    double valor, pagamento;

    printf("Nome: ");
    ler_texto(nome, 50);

    printf("Valor por hora: ");
    scanf("%lf", &valor);

    printf("Horas trabalhadas: ");
    scanf("%i", &horas);

    pagamento = (double)horas*valor;

    printf("O pagamento para %s deve ser %.2lf reais", nome, pagamento);

    return 0;
}
