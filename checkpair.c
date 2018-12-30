#include <stdio.h>
#include <math.h>

int main() {
	float num;
	printf("digite o numero que você deseja descobrir se é par");
	scanf("%f", &num);
	float numdivided = num/2;
	if ((numdivided - (int)numdivided) == 0) {
		printf("\nNúmero é par!!");
	} else {
		printf("\nNúmero é impar");
	}
	return 0;
}