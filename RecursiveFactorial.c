#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
// � ��������� �ҷ��;�����?

int Factorial(int N);// Factorial �Լ��� ������ ���� �ۼ����ּ���!
int main(void) {
	int N;// �Լ����� ������ �����ߴٰ� ���� �ƴϿ���. main �Լ����� �Է°��� ������ ������ �ʿ��ؿ�.
	scanf("%d", &N);// ������ ������ ���� �ϳ��� �Է� �޾ƾ��ؿ�.
	printf("%d\n", Factorial(N)); /*�ش� ������ ���丮�� ���� �ٷ� ����غ���.*/
	return 0;
}

int Factorial(int N) {
	if (N == 0)
		return 1; // N == 0�� ���� 0!�� �ǹ��ϹǷ� 1�� ��ȯ����� �ؿ�.
	else if (N == 1)
		return 1; // N == 1�� ���� 1!�� �ǹ��ϹǷ� 1�� ��ȯ����� �ؿ�.
	else
		return Factorial(N - 1) * N;// n >=2�� ���, Factorial(N-1) * N�� ��ȯ����� �ؿ�.									// �׷��� Factorial(N-1)�� (N-1)!�� ��ȯ���ֱ� ������ N!�� ���� �� �־��!
}