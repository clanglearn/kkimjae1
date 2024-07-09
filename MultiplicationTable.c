#include <stdio.h>

int main(void) {
	int num1=1;
	while (num1 < 4) {
	int num2 = 1;
	while (num2 < 10) {
	printf("%d * %d= %d\n", num1, num2, num1 * num2);
	num2++;
	}
	num1++;
	}
	int num3 = 4;
	do
	{
	int num4 = 1;
	do {
		printf("%d * %d= %d\n", num3, num4, num3 * num4);
		num4++;
	}		while (num4 < 10);
		num3++;;
	}		while (num3 < 7);
	for (int num5 = 7; num5 < 10; num5++)
		for(int num6=1; num6 < 10; num6++)
			printf("%d * %d= %d\n", num5, num6, num5 * num6);
}

	