
\#include <stdio.h>

int main(){
	int a;
	printf(" nhap vao mot so: ");
	scanf("%d", &a);
	if(a%3==0)
		printf("%d chia het cho 3",a);
	else
		printf("%d khong chia het cho 3",a); 
	return 0; 
} 
