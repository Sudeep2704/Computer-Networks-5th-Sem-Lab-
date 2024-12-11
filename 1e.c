#include <stdio.h>

void check_endianness() {
    unsigned int test = 1;
    char *byte = (char *)&test;
    if (*byte) {
        printf("The machine is Little Endian.\n");
    } else {
        printf("The machine is Big Endian.\n");
    }
}


void print_bytes(int num) {
    unsigned char *byte_ptr = (unsigned char *)&num;
    printf("Bytes of the number: ");
    for (int i = 0; i < sizeof(num); i++) {
        printf("%02x ", byte_ptr[i]);
    }
    printf("\n");
}

int swap_endianness(int num) {
    int swapped = ((num >> 24) & 0xFF) | 
                  ((num >> 8) & 0xFF00) | 
                  ((num << 8) & 0xFF0000) | 
                  ((num << 24) & 0xFF000000);
    return swapped;
}

int main() {
    int num;

        check_endianness();

    printf("Enter a number: ");
    scanf("%d", &num);

  
    printf("Original number: %d\n", num);
    print_bytes(num);

    int swapped_num = swap_endianness(num);

    printf("Number after swapping endianness: %d\n", swapped_num);
    print_bytes(swapped_num);

    return 0;
}
