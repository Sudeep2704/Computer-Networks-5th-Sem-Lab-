#include <stdio.h>


struct pkt {

    char c1;
    char ch2[2];
    char ch3;
};

int main() {
int num;
struct pkt p;

printf("Enter Number\n");
scanf("%d\n", &num);


p.c1 = (num >> 24) & 0xFF;
p.ch2[0] = (num >> 16) & 0xFF;
p.ch2[1] = (num >> 8) & 0xFF;
p.ch3 = num & 0xFF;
printf("Contents of structure\n");
printf("c1: %d\n", p.c1);
printf("ch2[0]: %d\n", p.ch2[0]);
printf("ch2[1]: %d\n", p.ch2[1]);
printf("ch3: %d\n", p.ch3);



int recon = (p.c1 << 24) | (p.ch2[0] << 16) | p.ch2[1] << 8 | p.ch3;

printf("Reconstructed num is :%d\n", recon);


}