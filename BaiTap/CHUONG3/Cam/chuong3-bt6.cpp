#include <stdio.h>

int main()
{
	// int c=10;
	int input;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&input);
	printf("\n");
	if(input>100)
	{
		printf("So lon hon 100\n");
		
	}
	else if(input<100)
	{
		printf("So nho hon 100\n");
		
	}
	else
	{
		printf("So khong nho hon va khong lon hon 100\n");
		
	}
	return 0;
	
}
