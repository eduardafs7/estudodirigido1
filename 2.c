#include <stdio.h>

void decimal_para_binario(int decimal) {
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

void decimal_para_hexadecimal(int decimal) {
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    int num1 = 297;
    int num2 = 4021;
    int num3 = 9135;

    printf("Decimal: %d -> ", num1);
    decimal_para_binario(num1);
    decimal_para_hexadecimal(num1);

    printf("Decimal: %d -> ", num2);
    decimal_para_binario(num2);
    decimal_para_hexadecimal(num2);

    printf("Decimal: %d -> ", num3);
    decimal_para_binario(num3);
    decimal_para_hexadecimal(num3);

    return 0;
}
