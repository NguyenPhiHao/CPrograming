#include <stdio.h>

int main(){
    char ch = 'a';
printf("%zu\n", sizeof(ch)); /* Hợp lệ, sẽ in ra kích thước của một đối tượng char,
                              * luôn là 1 cho mọi nền tảng. */
printf("%zu\n", sizeof ch); /* Hợp lệ, sẽ in ra kích thước của một đối tượng char, 
                             *luôn là 1 cho mọi nền tảng. */

}