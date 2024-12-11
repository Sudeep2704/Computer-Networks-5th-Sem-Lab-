#include <stdio.h>
#include <stdlib.h>

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Numbers you entered are: %d and %d\n", num1, num2);
    Swap(&num1, &num2);
    printf("Swapped numbers are: %d and %d\n", num1, num2);
    return 0;
}
