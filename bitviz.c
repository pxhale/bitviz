#include <stdio.h>

int main() {
    int num;
    printf("Enter a small number (0-255): ");

    if (scanf("%d", &num) != 1 || num < 0 || num > 255) {
        printf("That's not a valid byte, chief.\n");
        return 1;
    }

    printf("\nBitwise Visualization:\n\n");

    // Header: Jede Zahl bekommt genau 4 Zeichen Platz
    printf(" 128  64  32  16   8   4   2   1\n");
    printf("---------------------------------\n");
    
    // Bits: Jedes Bit wird ebenfalls in ein 4-Zeichen-Feld gesetzt
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%4d", bit); 
    }
    
    printf("\n\nTherefore, the byte for %d is ", num);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf(".\n");

    return 0;
}

