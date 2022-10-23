#include <stdio.h>
int main(){
	int a,b;
	int alan, cevre;

	printf("a kenarýný giriniz:");
	scanf("%d",&a);

	printf("b kenarýný giriniz:");
	scanf("%d",&b);

	alan=a*b;
	cevre=2*(a+b);
	printf("Dikdörtgenin alaný: %d", alan);
	printf("Dikdörtgenin çevresi: %d", cevre);

	return 0;
}
