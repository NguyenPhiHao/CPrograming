#include <stdio.h>

int main()

{
	//int c=10
	float luong=0;
	float thue=0;
	printf("Nhap vao luong: ");
	scanf("%f",&luong);
	printf("\n");
	if(luong==15)
	{
		thue=luong*20/100;
		luong=thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong);
		
	}
	else if(luong>7&&luong<15)
	{
		thue=luong*20/100;
		luong=thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong);
		
	}
	else if(luong<7){
		thue=luong*10/100;
		luong=thue;
		printf("thue: %f\n",thue);
		printf("luong rong: %f\n",luong);
		
		
	}
	else{
		printf("Khong the tinh luong!\n");
		
	}return 0;
}
