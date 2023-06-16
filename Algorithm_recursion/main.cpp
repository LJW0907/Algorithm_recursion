#include <iostream>
using namespace std;

int add(int n) { //recursion을 이용한 중첩 덧셈
	if (n <= 0)
		return 0;

	return n + add(n - 1);
}

int fact(int n) {
	if (n <= 1)
		return 1;

	return n * fact(n - 1);
}

int fibo(int n) { //n번째 피보나치 수를 반환한다(n은 양수)
	if (n < 2)
		return n;

	return fibo(n - 1) + fibo(n - 2);
}

int gcd(int m, int n) { //m과 n의 최대공약수 구하기
	if (n == 0)
		return m;
	else
		return gcd(n, m%n);
}

int main() {
	//0~n까지 덧셈
	/*{
		int n = 10;
		int result = 0;

		result = add(n);

		cout << result << endl;
	}*/

	//팩토리얼
	/*{
		int result = fact(5);

		cout << result << endl;
	}*/

	//피보나치
	/*{
		int result = fibo(10);

		cout << result << endl;
	}*/

	//최대공약수
	{
		int result = gcd(4, 10);

		cout << result << endl;
	}
}