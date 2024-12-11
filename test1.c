#include <stdio.h>

void checkmachine() {

unsigned int test = 1;
char *byte = (char *)&test;
if(*byte){
    printf("Little endian machine");
    }
    else {
        printf("Big endian machine\n");
    }
}

void printbytes(int num){

unsigned char *bytes_ptr = (unsigned char *)&num;
printf("bytes of the numbers");
for(int i = 0; i < sizeof(num); i++){
printf("%02x", bytes_ptr[i]);
}

}
int swap_endianness(int num) {
    int swapped = ((num >> 24) & 0xFF) | 
                  ((num >> 8) & 0xFF00) | 
                  ((num << 8) & 0xFF0000) | 
                  ((num << 24) & 0xFF000000);
    return swapped;
}

int main() {

checkmachine();


}



