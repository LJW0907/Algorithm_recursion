#include <iostream>
using namespace std;

int add(int n) { //recursion�� �̿��� ��ø ����
	if (n <= 0)
		return 0;

	return n + add(n - 1);
}

int fact(int n) {
	if (n <= 1)
		return 1;

	return n * fact(n - 1);
}

int fibo(int n) { //n��° �Ǻ���ġ ���� ��ȯ�Ѵ�(n�� ���)
	if (n < 2)
		return n;

	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	/*{
		int n = 10;
		int result = 0;

		result = add(n);

		cout << result << endl;
	}*/

	/*{
		int result = fact(5);

		cout << result << endl;
	}*/

	{
		int result = fibo(10);

		cout << result << endl;
	}
}