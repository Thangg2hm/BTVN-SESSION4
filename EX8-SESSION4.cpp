#include<stdio.h>
int main(){
	float a,b,c;
	printf("nhap vao canh a:");
	scanf("%f",&a);
	printf("nhap vao canh b;");
	scanf("%f",&b);
	printf("nhap vao canh c:");
	scanf("%f",&c);
	if(a+b>c&&b+c>a&&a+c>b){
		printf("ba canh a,b,c la ba canh cua mot tam giac.");
	} else{
		printf("ba canh a,b,c khong phai la ba canh cua mot tam giac vi tong hai canh khong lon hon canh con lai.");
	}
	return 0;
	}
