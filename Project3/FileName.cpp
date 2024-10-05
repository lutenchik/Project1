#include <stdio.h>
#include <math.h>

int main() {
	float a, b, x;

	printf("Enter a, b, x:");
	int ret = scanf_s("%f, %f, %f", &a, &b, &x);

	if (ret < 3) {
		printf("Error input\n");
		return -1;
	}

	float y = 1 - tan(a * x) / b - sqrt(x + 1);
	printf("Result: %.3f\n", y);
	return 0;
}