#include <stdio.h>
#include <string.h>

// função para converter decimal para binário
void decimalParaBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int bin[32];
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

// função para converter binário para decimal
int binarioParaDecimal(char bin[]) {
    int decimal = 0;
    int base = 1;
    int len = strlen(bin);
    
    for (int i = len - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            decimal += base;
        }
        base = base * 2;
    }
    
    return decimal;
}
// decimal para hexadecimal
void decimalParaHexadecimal(int n) {
    char hex[32];
    int i = 0;
    while (n != 0) {
        int temp = n % 16;
        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 87;
        }
        n = n / 16;
