#include <stdio.h>

int main() {
    int x = 10;
    int y = 5 ??- 2;  // Lẽ ra là phép trừ, nhưng bị thay thành phép NOT bitwise
    printf("Kết quả là: %d\n", y);
    return 0;
}