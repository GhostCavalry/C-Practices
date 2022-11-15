#include <stdio.h>

int main() {

	int number,number2;
	double number3;
	float number4;
	printf("Enter the first number: ",number);
	scanf("%d",&number);
	
	printf("%2d\n",number++);
	printf("%d\n",number);
	printf("%d",++number);
	
	printf("Enter your double: ",number3);
	scanf("%lf",&number3);
	
	printf("Enter your float: ",number4);
	scanf("%f",&number4);
	
	printf("Your double is %f and float is %f",number3,number4);

}
