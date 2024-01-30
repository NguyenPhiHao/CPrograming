#include <stdio.h>

int main(){
	int a,b,c,d,max1,max2;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	printf("Nhap d: ");
	scanf("%d",&d);
	if (a>b) {max1 = a;
	}
	else{max1 = b;
	}
	if (c>d){
		max2 = c;
	}
	else{max2 = d;
	}
	if (max1 >max2){printf("So lon nhat la: %d",max1);
	
	}else
	{
		printf("So lon nhat la: %d",max2);
		
	}
	return 0;
}
