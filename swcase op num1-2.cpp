#include <stdio.h>

int main() {

enbas:
int n1,n2;
int res = 0;
char c1;

printf("Choose the operator: (+ - * /) ",c1);
scanf("%s",& c1);
printf("Enter the first number: ",n1);
scanf("%d",&n1);
printf("Enter the second number: ",n2);
scanf("%d",&n2);
printf("%d and %d are the numbers.\n",n1,n2);



switch(c1){
	case '+':
		res = n1+n2;
		printf("Result is %d",res);
		break;
	case '-':
		res = n1-n2;
		printf("Result is %d",res);
		break;
	case '*':
		res=n1*n2;
		printf("Result is %d",res);
		break;
	case '/':
		res=n1/n2;
		printf("Result is %d",res);
		break;
	default:
		printf("Enter the truth one\n");
		goto enbas;
		break;

}




}
