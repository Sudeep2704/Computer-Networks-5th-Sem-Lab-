//Each byte from a given number divide and display what is stored in the each block;

#include <stdio.h>
#include <stdlib.h>
void extractBytes(unsigned int num, char *byte1, char *byte2, char *byte3, char *byte4) {
    *byte1 = (num & 0xFF); 
    *byte2 = (num >> 8) & 0xFF; 
    *byte3 = (num >> 16) & 0xFF; 
    *byte4 = (num >> 24) & 0xFF; 
}

int main() {
    unsigned int num = 512; 
    char byte1, byte2, byte3, byte4; 
    extractBytes(num, &byte1, &byte2, &byte3, &byte4);

    printf("Byte 1: 0x%02X\n", byte1); 
    printf("Byte 2: 0x%02X\n", byte2);
    printf("Byte 3: 0x%02X\n", byte3);
    printf("Byte 4: 0x%02X\n", byte4);

    return 0;
}
