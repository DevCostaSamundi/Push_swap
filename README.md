Push_swap

Push_swap é um projeto da Escola 42 que desafia você a ordenar uma pilha de números usando um conjunto limitado de operações. O objetivo é implementar o algoritmo de ordenação mais eficiente possível utilizando o menor número de movimentos.

Objetivo
Ordenar uma pilha de números utilizando um conjunto de operações específicas em uma segunda pilha auxiliar.

Regras
Você deve implementar dois programas:

push_swap: Gera a sequência de instruções para ordenar a pilha.
checker: Verifica se a sequência de instruções gerada pelo push_swap realmente ordena os números.

Operações permitidas:

sa (swap a): Troca os dois primeiros elementos da pilha A.
sb (swap b): Troca os dois primeiros elementos da pilha B.
ss: Executa sa e sb simultaneamente.
pa (push a): Remove o topo da pilha B e coloca no topo da pilha A.
pb (push b): Remove o topo da pilha A e coloca no topo da pilha B.
ra (rotate a): Desloca todos os elementos da pilha A para cima.
rb (rotate b): Desloca todos os elementos da pilha B para cima.
rr: Executa ra e rb simultaneamente.
rra (reverse rotate a): Desloca todos os elementos da pilha A para baixo.
rrb (reverse rotate b): Desloca todos os elementos da pilha B para baixo.
rrr: Executa rra e rrb simultaneamente.

Estrutura do Projeto

Arquivos principais:

push_swap.c: Contém o ponto de entrada principal e a lógica para organizar as pilhas.

checker.c: Verifica se a sequência de operações gerada está correta.

operations.c: Implementa as operações da pilha.

stack_utils.c: Funções auxiliares para manipulação da pilha.

sorting_algorithms.c: Algoritmos de ordenação implementados, como para 3, 5 números, e mais.

error_handling.c: Verificação de erros e validações de entrada.

Funções principais:

stack_init_a: Inicializa a pilha A com os números fornecidos na linha de comando.

push, swap, rotate, reverse rotate: Executa as operações permitidas.

three_sorted: Algoritmo otimizado para ordenar três números.

argument: Verifica a validade da entrada de argumentos.

Algoritmo:
Para uma pilha com até 3 números, o algoritmo three_sorted é utilizado.
Para 5 ou mais números, a lógica de divisão de pilha e inserção em B é aplicada, movendo os menores elementos para a pilha B e ordenando-os posteriormente.

Como Usar
Compilação:
make

Execução:

push_swap:

./push_swap 3 2 5 1 4

Isso exibirá as operações necessárias para ordenar os números fornecidos.

checker:

./push_swap 3 2 5 1 4 | ./checker 3 2 5 1 4
Isso verificará se as operações retornadas ordenam corretamente os números.

Testes:
Para testar com diferentes entradas, você pode executar o programa com uma variedade de argumentos e verificar a saída. Por exemplo:

./push_swap 4 7 5

Erros Comuns

Segmentation fault: Certifique-se de que os argumentos estão sendo validados corretamente, especialmente entradas vazias ou duplicadas.

Operações inválidas: A função checker deve ser usada para validar as operações geradas.

Notas Importantes

O projeto não permite o uso de bibliotecas como stdbool.h.

O código deve seguir as regras de estilo da Norminette (funções com no máximo 25 linhas).
Contribuições

Se você quiser contribuir com melhorias ou encontrar bugs, sinta-se à vontade para abrir uma issue ou enviar um pull request.
