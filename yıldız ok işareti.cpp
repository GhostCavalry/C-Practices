#include <stdio.h>

int main() {
	
	
	int bosluksayisi = 8;
	int bosluksayisi2 = 7;
	int arabosluk = 1;

	printf("\n");
	
	for(int i=0; i<1; i++){
		
		for(int j=0; j<bosluksayisi; j++){
			
			printf(" ");		
			
		}
		bosluksayisi--;
		printf("*");
		printf("\n");
	
	}
	for(int i=0; i<3; i++){
		
		for(int j=0; j<bosluksayisi; j++){
			
			printf(" ");
			
					
		}
		
		bosluksayisi--;
		printf("*");
		
		for(int k=0; k<arabosluk; k++){
			
			printf(" ");
			
			
		}
		printf("*");
		arabosluk++;
		arabosluk++;
		printf("\n");
	
	}
	
	for(int j=0; j<1; j++){
		
		for(int j=0; j<bosluksayisi; j++){
			
			printf(" ");		
			
		}
		
		for(int k=0; k<4; k++) {
				
			printf("*");	
		}
		
		printf(" ");
		
		for(int j=0; j<4; j++){
				
			printf("*");
			
			}
			
		printf(" ");
		bosluksayisi--;
		printf("\n");
		
	}
	
	for(int j=0; j<2; j++){
			
		for(int k=0; k<bosluksayisi2; k++) {
			
			printf(" ");
			
		}
		
		for(int j=0; j<2; j++){
			
			printf("*");
			printf(" ");
			
			
		}
		
		
		printf("\n");
		
		
	}
	
	for(int k=0; k<1; k++){
		
		for(int j=0; j<bosluksayisi2; j++){
			
			printf(" ");
			
		}
		
		for(int k=0; k<3; k++){
			
			printf("*");
			
		}
		
	}
	
		
			
	
}
