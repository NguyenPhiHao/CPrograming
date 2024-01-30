#include <stdio.h>

int main(){
	int a, b, c, d, max1, max2;
	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);
	printf("nhap so nguyen c: ");
	scanf("%d", &c);
	printf("nhap so nguyen d: ");
	scanf("%d", &d);
	if( a >b){
		max1 = a;
}
	else {
		max1 = b; }
	if( c > d){
		max2 = c;
}
	else{
		max2 = d; 
	}
	if( max1 > max2){
		printf("so lon nhat la: %d", max1);
}
	else {
		printf(" so lon nhat la: %d ", max2); 
	} 
	return 0; 
} 
