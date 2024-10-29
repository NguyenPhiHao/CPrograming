#include <stdio.h>

int main() {
    int i =9;
    int sum = 9;


    for (i = 1; i <= 5; ++i) {
        sum = sum + i; //  0 + 6 => sum = 6;
        printf("Gia tri: %d\n", i);
    }
        printf("Gia tri Sum: %d\n", sum);
    return 0;
}