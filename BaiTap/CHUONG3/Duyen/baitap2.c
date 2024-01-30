#include <stdio.h>
#include <math.h>
 
int main(){
	float a, b, c, delta, x1, x2;
	printf(" phuong trinh bac hai co dang ax^2 + bx + c = 0. \n ");
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);
	if( a==0 ){
		if( b==0 ){
			if( c==0 )
				printf("phuong trinh vo so nghiem");
			else 
				printf("phuong trinh vo nghiem ");
	}
		else {
			x1 = -b/c;
			printf("phuong trinh co 1 nghiem ", x1); 
		} 
	}
	else{
		delta = b*b - 4*a*c;
		if(delta <0 )
			printf("phuong trinh vo nghiem");
		if(delta ==0 )
			x1 = -b /(2*a);
			printf("phuong trinh da nghiem kep: %f", x1);
		} 
		if(delta > 0 ){
			x1 = (-b +sqrt(delta))/(2*a);
			x2 = (-b -sqrt(delta))/(2*a);
			printf("phuong trinh co hai nghiem phan biet: x1 = %f, x2 = %f", x1, x2); 
			 
		} 

	return 0; 
} 
