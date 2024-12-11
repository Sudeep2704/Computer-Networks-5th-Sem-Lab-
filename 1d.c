#include <stdio.h>

struct pkt {
    char ch1;
    char ch2[2];
    char ch3;
};

int main() {
    int num;
    struct pkt p;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    p.ch1 = (num >> 24) & 0xFF;
    p.ch2[0] = (num >> 16) & 0xFF;
    p.ch2[1] = (num >> 8) & 0xFF;
    p.ch3 = num & 0xFF;

    
    printf("Contents of the structure:\n");
    printf("ch1: %d\n", p.ch1);
    printf("ch2[0]: %d\n", p.ch2[0]);
    printf("ch2[1]: %d\n", p.ch2[1]);
    printf("ch3: %d\n", p.ch3);

    
    int reconstructed_num = (p.ch1 << 24) | (p.ch2[0] << 16) | (p.ch2[1] << 8) | p.ch3;
    
   
    printf("Reconstructed number: %d\n", reconstructed_num);

    return 0;
}
