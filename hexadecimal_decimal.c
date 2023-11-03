#include <stdio.h>

int main() {
    char hex;
    int decimal = 0;

    printf("Enter a hexadecimal number (without 0x prefix): ");
    
        while (1) {
        scanf("%c", &hex);

               if (hex == '\n') {
            break;
        }

                if (hex >= '0' && hex <= '9') {
            decimal = decimal * 16 + (hex - '0');
        } else if (hex >= 'A' && hex <= 'F') {
            decimal = decimal * 16 + (hex - 'A' + 10);
        } else if (hex >= 'a' && hex <= 'f') {
            decimal = decimal * 16 + (hex - 'a' + 10);
        } else {
            printf("Invalid input: %c\n", hex);
            return 1; 
        }
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
