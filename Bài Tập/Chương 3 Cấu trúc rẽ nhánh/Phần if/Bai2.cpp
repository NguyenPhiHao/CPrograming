#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,delta,x1,x2;
	printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0.\n");
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);

	if (a==0) {  // Nếu a = 0 thì trở thành phương trình bậc 1
		if (b==0) {
			if (c == 0)
                printf("Phuong trinh vo so nghiem");
			else  // c khác 0
                printf("Phuong trinh vo nghiem");
		}
		else {  // b khác 0
			x1 = -b/c;
			printf("Phuong trinh co 1 nghiem:%f",x1);
		}
	}
	else {
		delta = b*b - 4*a*c ;
		if (delta < 0)
            printf("Phuong trinh vo nghiem");
		if (delta==0) {
			x1 = -b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (delta > 0) {
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet: x1 = %f, x2 = %f",x1, x2);
		}
	}
}