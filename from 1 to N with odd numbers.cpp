#include <stdio.h>

int main() {
	
	int number;
	int start=1;
	
	printf("enter any number: ",number);
	scanf("%d",&number);
	
	while(start<=number){
		
		if(start%2==1){
			
			printf("%d\n",start);		
		
		}
		
		start++;
	}
	
		
}
