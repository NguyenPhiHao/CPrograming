#include <stdio.h>

int main(){
	int h, m ,s, them;
	printf("Nhap vao gio: ");
	scanf("%d",&h);
	printf("Nhap vao phut: ");
	scanf("%d",&m);
	printf("Nhap vao giay: ");
	scanf("%d",&s);
	printf("Nhap them vao giay: ");
	scanf("%d",&them);
	if((s+them)<60){
		s = s +them;
		
	}else
	{s = s+them-60;
	m =m+1;
	
	}
	if(m>=60){
		m= m-60;
		h=h+1;
		
	}printf("gio:phut:giayla:%02d:%02d:%02d",h,m,s);
	
}
