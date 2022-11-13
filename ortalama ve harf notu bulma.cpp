#include <stdio.h>

int main() {

int n1,n2,n3,n4,n5,toplam;
float ortalama;

printf("Kimya notunu gir:",n1);
scanf("%d",&n1);
printf("Fizik notunu gir:",n1);
scanf("%d",&n2);
printf("Ingilizce notunu gir:",n1);
scanf("%d",&n3);
printf("Matematik notunu gir:",n1);
scanf("%d",&n4);
printf("Turkce notunu gir:",n1);
scanf("%d",&n5);

toplam = (n1+n2+n3+n4+n5);
ortalama = toplam/5;

printf("Derslerinin ortalamasi %f\n",ortalama);

if(ortalama>=90){
 printf("Harf Notu: A",ortalama);
}

else if(ortalama>=80 && ortalama<90){
 printf("Harf Notu: B",ortalama);
}
else if(ortalama>=70 && ortalama<80){
 printf("Harf Notu: C",ortalama);
}
else if(ortalama>=60 && ortalama<70){
 printf("Harf Notu: D",ortalama);
}
else if(ortalama>=50 && ortalama<60){
 printf("Harf Notu: E",ortalama);
}
else{
 printf("Gecerli bir degeri yok\n"); 
}





}
