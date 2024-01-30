#include <stdio.h>

int main(){
	//int c=10;
	int input;
	printf("nhap vao so nguyen: ");
	scanf("%d",&input);
	printf("\n");
	if(input>100){
		printf("so lon hon 100\n"); 
	} 
	else if(input<100){
		printf("so nho hon 100\n");
	} 
	else{
		printf("so khong nho hon va lon hon 100\n"); 
	} 
	return 0;
	 
} 
