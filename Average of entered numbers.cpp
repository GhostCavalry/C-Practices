#include <stdio.h>
#include <conio.h>

int main() {
	
	int number1,number2,total,point;
	printf("Enter for value counter number: ");
	scanf("%d",&point);
	
	for(int i=0; i<point; i++)
	{
		printf("%d.number is: ",i+1);
		scanf("%d",&number1);
		total += number1;
	}
	
	printf("Average is: %d" ,total/point);
	getch();
	return 0;
}
