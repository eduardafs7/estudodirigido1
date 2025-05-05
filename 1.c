#include <stdio.h>
#include <math.h>

int binario_para_decimal(int binario) {
    int decimal = 0, i = 0;
    while (binario != 0) {
        decimal += (binario % 10) * pow(2, i);
        binario /= 10;
        i++;
    }
    return decimal;
}

void binario_para_hexadecimal(int binario) {
    int decimal = binario_para_decimal(binario);
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    int binario1 = 100101;
    int binario2 = 1000101101;
    int binario3 = 1111010110110;

    printf("Binario: %d -> Decimal: %d\n", binario1, binario_para_decimal(binario1));
    binario_para_hexadecimal(binario1);
    
    printf("Binario: %d -> Decimal: %d\n", binario2, binario_para_decimal(binario2));
    binario_para_hexadecimal(binario2);
    
    printf("Binario: %d -> Decimal: %d\n", binario3, binario_para_decimal(binario3));
    binario_para_hexadecimal(binario3);

    return 0;
}
