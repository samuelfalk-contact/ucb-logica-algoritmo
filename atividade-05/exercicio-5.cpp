#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int quantidadeProdutoA;
    int quantidadeProdutoB;
    float precoProdutoA;
    float precoProdutoB;
    float subtotal;
    float valorDesconto;
    float totalComDesconto;
    int codigoSetor;
    int continuarCalculando;

    // Estrutura de repetição do-while: garante que o menu de venda
    // seja executado pelo menos uma vez, e repete enquanto o usuário
    // desejar registrar novas vendas.
    do {
        printf("Bem-vindo ao sistema de caixa!\n");
        printf("Por favor, insira os dados da venda.\n\n");

        // Leitura do preço do produto A (tipo float, pois envolve centavos)
        printf("Digite o preco do produto A: ");
        scanf("%f", &precoProdutoA);

        printf("Digite a quantidade do produto A: ");
        scanf("%d", &quantidadeProdutoA);

        // Validação de entrada: impede que o usuário prossiga com uma
        // quantidade inválida (zero ou negativa). O while garante que
        // a pergunta se repita até receber um valor válido.
        while (quantidadeProdutoA <= 0) {
            printf("A quantidade deve ser um numero positivo. Digite novamente: ");
            scanf("%d", &quantidadeProdutoA);
        }

        printf("Digite o preco do produto B: ");
        scanf("%f", &precoProdutoB);

        printf("Digite a quantidade do produto B: ");
        scanf("%d", &quantidadeProdutoB);

        // Mesma lógica de validação aplicada ao produto B
        while (quantidadeProdutoB <= 0) {
            printf("A quantidade deve ser um numero positivo. Digite novamente: ");
            scanf("%d", &quantidadeProdutoB);
        }

        // Cálculo do subtotal: soma do valor total gasto em cada produto
        // (quantidade * preço unitário)
        subtotal = (quantidadeProdutoA * precoProdutoA) + (quantidadeProdutoB * precoProdutoB);

        // Inicializa o desconto como zero antes de verificar as faixas de valor
        valorDesconto = 0.0;

        // Estrutura condicional (if/else if) para definir a faixa de desconto:
        // - Acima de R$100 até R$250: 10% de desconto
        // - Acima de R$250: 20% de desconto
        // - R$100 ou menos: nenhum desconto (valorDesconto permanece 0.0)
        if (subtotal > 100.0 && subtotal <= 250.0) {
            valorDesconto = subtotal * 0.10;
        } else if (subtotal > 250.0) {
            valorDesconto = subtotal * 0.20;
        }

        // Total final é o subtotal menos o desconto aplicado
        totalComDesconto = subtotal - valorDesconto;

        printf("\nResumo da Compra:\n");
        printf("Subtotal: R$ %.2f\n", subtotal);

        // Variável auxiliar booleana (int usado como flag: 1 = verdadeiro, 0 = falso)
        // para deixar a condição do if mais legível
        int descontoAplicado = valorDesconto > 0;
        if (descontoAplicado) {
            printf("Desconto Aplicado: R$ %.2f\n", valorDesconto);
        } else {
            printf("Nenhum desconto aplicado para esta compra.\n");
        }
        
        printf("Total a Pagar: R$ %.2f\n", totalComDesconto);

        printf("\nSelecione o setor de retirada do produto (1-Eletronicos, 2-Vestuario, 3-Alimentos): ");
        scanf("%d", &codigoSetor);

        // Estrutura switch-case: direciona o cliente conforme o código do setor.
        // O 'default' trata qualquer valor fora das opções válidas (1, 2 ou 3).
        switch (codigoSetor) {
            case 1:
                printf("Dirija-se ao setor de Eletronicos para retirar seus produtos.\n");
                break;
            case 2:
                printf("Dirija-se ao setor de Vestuario para retirar seus produtos.\n");
                break;
            case 3:
                printf("Dirija-se ao setor de Alimentos para retirar seus produtos.\n");
                break;
            default:
                printf("Setor invalido. Por favor, procure o balcao de informacoes.\n");
                break;
        }

        // Estrutura FOR usada apenas para repetir uma mensagem de
        // agradecimento 3 vezes (i não é usado no corpo do laço, só como contador)
        for (i = 0; i < 3; i++) {
            printf("Obrigado por comprar conosco!\n");
        }

        printf("\nDeseja registrar uma nova venda? (1 para Sim / 0 para Nao): ");
        scanf("%d", &continuarCalculando);
        
        // Limpa a tela do terminal: "cls" no Windows, "clear" no Linux/Mac.
        // O operador "||" faz o segundo comando rodar caso o primeiro falhe
        // (útil para portabilidade entre sistemas operacionais)
        system("cls || clear");

    } while (continuarCalculando == 1);
    // Encerra o do-while quando o usuário digitar qualquer valor diferente de 1

    printf("Encerrando o sistema de caixa.\n");

    return 0;
}
