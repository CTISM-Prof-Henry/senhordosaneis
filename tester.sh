#!/bin/bash

# onde escrever o binário do programa
SOURCE="tarefas/test.c"  # código-fonte
BINARY="tarefas/test.o"  # coódigo binário
OUTPUT="tarefas/test.output"  # onde escrever a saída do programa
EXPECTED_OUTPUT_FILE="gabaritos/test.output"  # onde está a saída correta do programa

# compila o programa
gcc $SOURCE -o $BINARY
# escreve a saída no arquivo de saida
$BINARY > $OUTPUT

# verifica se o arquivo com a saída esperada existe
if [ ! -f "$EXPECTED_OUTPUT_FILE" ]; then
    echo "Erro: O arquivo com a saída de texto não foi encontrado!"
    exit 1
fi

# lê a saída esperada de um arquivo
EXPECTED_OUTPUT=$(cat "$EXPECTED_OUTPUT_FILE")

# roda o programa e captura a saída
ACTUAL_OUTPUT=$($BINARY)

# compara a saída com o esperado
if [ "$ACTUAL_OUTPUT" == "$EXPECTED_OUTPUT" ]; then
    echo "Certo!"
else
    echo "Errado!"
    echo "Esperava: $EXPECTED_OUTPUT"
    echo "Recebeu: $ACTUAL_OUTPUT"
fi
