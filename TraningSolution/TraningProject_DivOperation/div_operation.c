#include <stdio.h>
int main() {
	int a, b;
	float div;
	printf("¬ведите два целых числа(через пробел):");
	scanf_s("%d %d", &a, &b);
	if (b != 0 && a!=0) {
		div = a / b;
		printf("%f\n", div);
	}else if(a==0 && b!=0){
		div = 0;
		printf("%f\n", div);
	}
	system("pause");
	return 0;
}
