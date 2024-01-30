#include <stdio.h>

int main()
{
	//int c= 10;
	float sophutgoi=0;
	float cuocphi=0;
	printf("Nhap vao so phut goi:");
	scanf("%f",&sophutgoi);
	printf("\n");
	if(sophutgoi<50){
		cuocphi=sophutgoi*600;
		printf("tiencuoc: %f\n",cuocphi);
	}
	
else if(sophutgoi<=200&&sophutgoi>50)
{
	cuocphi=25+50+600+(sophutgoi-50)*400;
	printf("tiencuoc: %f\n",cuocphi);
	
}else
{
	cuocphi=25+50+600+150*400+(sophutgoi-200)*200;
	printf("tiencuoc: %f\n",cuocphi);
}
return 0;
}

