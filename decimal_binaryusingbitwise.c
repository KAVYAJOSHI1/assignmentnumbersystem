#include <stdio.h>

void decimalToBinary(int decimal) {
    int size = sizeof(decimal) * 8; // Calculate the number of bits in an integer
    for (int i = size - 1; i >= 0; i--)
     {
        int bit = (decimal >> i) & 1; // Shift the bits to the right and mask the least significant bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Binary representation: ");
    decimalToBinary(decimal);
    
    return 0;
}
