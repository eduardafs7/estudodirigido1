#include <stdio.h>
#include <stdlib.h>

int hexadecimal_para_decimal(char hex[]) {
    return strtol(hex, NULL, 16);
}

void hexadecimal_para_binario(char hex[]) {
    int decimal = hexadecimal_para_decimal(hex);
    int binario[32], i = 0;
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    char hex1[] = "7CD";
    char hex2[] = "9873";
    char hex3[] = "2F5AB";

    printf("Hexadecimal: %s -> Decimal: %d\n", hex1, hexadecimal_para_decimal(hex1));
    hexadecimal_para_binario(hex1);

    printf("Hexadecimal: %s -> Decimal: %d\n", hex2, hexadecimal_para_decimal(hex2));
    hexadecimal_para_binario(hex2);

    printf("Hexadecimal: %s -> Decimal: %d\n", hex3, hexadecimal_para_decimal(hex3));
    hexadecimal_para_binario(hex3);

    return 0;
}
