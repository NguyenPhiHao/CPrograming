#include<stdio.h>

int main (){
    int n, tong = 0;
    printf("Nhap vao so nguyen: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf ("Tong la: %d",tong);
    return 0;
}