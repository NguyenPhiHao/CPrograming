#include <stdio.h>

int main(){
	int h, m, s, them;
	printf("nhap vao gio :");
	scanf("%d",&h);
	printf("nhap vao phut :");
	scanf("%d", &m);
	printf("nhap vao giay:");
	scanf("%d", &s);
	printf("nhap vao giay them:"); 
	scanf("%d", &them);
	if((s+them) < 60){
		s=s+them;
}
	else{
		s=(s+them)- 60;
		m= m+1; 
	}		
	if(m >= 60){
		m+m-60;
		h=h+1; 
	} 
	printf("gio:phut:giay la: %02d: %02d: %02d", h,m,s); 
	 
	return 0; 
} 
