#include <stdio.h>

int main() {
	
	for(int j=1; j<=10; j++) {
		
		printf("%d ",j);
		
		for(int i=1; i<=j; i++){
		
			printf("%d",i);
		}		
		
		printf("\n");
	}
	
}





