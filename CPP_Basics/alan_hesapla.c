#include <stdio.h>
int main(){
	int a,b;
	int alan, cevre;

	printf("a kenar�n� giriniz:");
	scanf("%d",&a);

	printf("b kenar�n� giriniz:");
	scanf("%d",&b);

	alan=a*b;
	cevre=2*(a+b);
	printf("Dikd�rtgenin alan�: %d", alan);
	printf("Dikd�rtgenin �evresi: %d", cevre);

	return 0;
}
