#include<stdio.h>
int main(){
	int chisocu,chisomoi,sodien;
	int tiendien=0;
	printf("nhap vao chi so dien dau thang:");
	scanf("%d",&chisocu);
	printf("nhap vao chi so dien cuoi thang:");
	scanf("%d",&chisomoi);
	sodien=chisomoi-chisocu;

	if (sodien < 0) { 
	printf("chi so moi phai lon hon hoac bang chi so cu.\n");		
    } else{
    	if(0<=sodien&&sodien<50){
    		tiendien=10000;

		} else if(50<=sodien&&sodien<100){
			tiendien=15000;
		
		} else if(100<=sodien&&sodien<150){
			tiendien=20000;
			
		} else if(150<=sodien&&sodien<200){
			tiendien=25000;
					
		} else if(200<=sodien){
			tiendien=30000;
			
		}  else{
			printf("tada");
		}
	    printf("tien dien thang nay phai tra la %d VND\n",tiendien);
		return 0;
}
}
