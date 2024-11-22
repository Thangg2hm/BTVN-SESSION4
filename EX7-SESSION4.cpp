#include<stdio.h>
int main(){
	int sonam;
	printf("nhap vao nam ban muon kiem tra:");
	scanf("%d",&sonam);
	if((sonam&4==0&& sonam % 100 != 0) || (sonam % 400 == 0)){
		printf("nam %d la nam nhuan.\n",sonam);
		} else {
			printf("nam %d khong phai nam nhuan.\n",sonam);
			}
			return 0;
}			
