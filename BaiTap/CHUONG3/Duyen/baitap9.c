#include <stdio.h>

int main(){
	//c=10;
	float a=0;
	float b=0;
	float select=0;
	printf("nhap vao so thu 1: ");
	scanf("%f",&a);
	printf("\n"); 
	printf("nhap vao so thu 2: ");
	scanf("%f",&b);
	printf("\n"); 
	printf("chon phap toan:");
	scanf("%f",&select);
	printf("\n");
	if(select==1){
		printf("phep cong a+b= %f\n",a-b); 
	} 
	else if(select==2){
		printf("phep tru a-b= %f\n",a-b); 
	} 
	else if(select==3){
		printf("phep chia a/b= %f\n",a/b); 
	} 
	else{
		printf("phep chia a/b= %f\n",a/b); 
	} 
	return 0; 
} 
