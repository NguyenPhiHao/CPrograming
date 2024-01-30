#include <stdio.h>

int main(){
	//int c=10 ;
	float doanhthu=0;
	float hoahong=0;
	printf("nhap vao doanh thu: ");
	scanf("%f",doanhthu);
	printf("\n");
	if(doanhthu>300){
		hoahong=doanhthu*20/100;
		printf("hoahong: %f\n",hoahong);
	} 
	else if(doanhthu<=300&&doanhthu>100){
		hoahong=doanhthu*10/100;
		printf("hoahong: %f\n",hoahong); 
	}
	else{
		hoahong=doanhthu*5/100;
		printf("hoahong: %f\n",hoahong); 
	} 
	
	 
	 
	return 0;
} 
