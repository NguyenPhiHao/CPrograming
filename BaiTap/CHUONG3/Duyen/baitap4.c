#include <stdio.h>

int main(){
	float luong=0;
	float thue=0;
	printf("nhap vao luong:");
	scanf("%f",&luong);
	printf("\n");

	if(luong==15){
		thue=luong*20/100;
		luong-=thue;// luong = luong - thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong); 
	} 
	else if(luong>7&&luong<15){
		thue=luong*20/100;
		 luong-=thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong); 
	} 
	else if(luong<7){
		thue=luong*20/100;
		 luong-=thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong); 
	} 
	else{
		printf("khong the tinh luong!\n"); 
	} 
	 
	
	return 0; 
} 
