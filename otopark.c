#include<stdio.h>

int main(){
	
	int saat;
	
	printf("otoparkta kac saat kaldiniz?:");
	scanf("%d", &saat);
	
	if(saat<=4){
		printf("10TL odeyin.");
	}
	
	else if(saat<=8){
	
	printf("12TL odeyin.");
	}
	else if(saat<=12){
		
		printf("15TL odeyin.");
	}
	
	else if("saat<=13"){
		printf("20TL odeyin.");
	}
	
	else{
		
		printf("yanlýs saat girdiniz.");
	}
	
	
	return 0;
}
