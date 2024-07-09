#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
// 어떤 헤더파일을 불러와야하죠?

int Factorial(int N);// Factorial 함수의 원형을 먼저 작성해주세요!
int main(void) {
	int N;// 함수에서 변수를 선언했다고 끝이 아니에요. main 함수에서 입력값을 저장할 변수가 필요해요.
	scanf("%d", &N);// 선언한 변수에 정수 하나를 입력 받아야해요.
	printf("%d\n", Factorial(N)); /*해당 변수의 팩토리얼 값을 바로 출력해봐요.*/
	return 0;
}

int Factorial(int N) {
	if (N == 0)
		return 1; // N == 0일 때는 0!을 의미하므로 1을 반환해줘야 해요.
	else if (N == 1)
		return 1; // N == 1일 때도 1!을 의미하므로 1을 반환해줘야 해요.
	else
		return Factorial(N - 1) * N;// n >=2일 경우, Factorial(N-1) * N을 반환해줘야 해요.									// 그러면 Factorial(N-1)이 (N-1)!을 반환해주기 때문에 N!을 구할 수 있어요!
}