#include <stdio.h>

int main() {

char ch;

printf("Ing bir karakter giriniz: ",ch);
scanf("%s",&ch);

switch(ch) {
	case 'a':
		printf("Sesli karakter");
		break;
	case 'e':
		printf("Sesli karakter");
		break;
	case 'o':
		printf("Sesli karakter");
		break;
	case 'u':
		printf("Sesli karakter");
		break;
	case 'i':
		printf("Sesli karakter");
		break;
	default:
		printf("Sessiz karakter");
		break;
}

}
