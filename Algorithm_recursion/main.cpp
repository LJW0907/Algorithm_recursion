#include <iostream>
#include <math.h>
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

int gcd(int m, int n) { //m�� n�� �ִ����� ���ϱ�
	if (n == 0)
		return m;
	else
		return gcd(n, m%n);
}

void printBinary(int n) { //�������� �������� ��ȯ ���
	if (n < 2)
		cout << n;
	else {
		printBinary(n / 2);
		cout << n % 2;
	}
}

int search(int* data, int begin, int end, int target) { //recursion ���� Ž�� -���� ����
//���� Ž���� ������ ����̳�, '���ĵ� �迭'�̶�� ���� Ž���� ������ �������� �����Ƿ� �ƴϴ�.
	if (begin > end)
		return -1;
	else {
		int middle = (begin + end) / 2;

		if (data[middle] == target)
			return middle;

		int index = search(data, begin, middle - 1, target); //������ �������� ���� Ž��

		if (index != -1)
			return index;
		else
			return search(data, middle + 1, end, target); //�� ã������ ���� ���� Ž��
	}
}

int binarySearch(String[] items, String target, int begin, int end) { //���ڿ� ũ�� ���� ��
	if (begin > end)
		return  -1;
	else {
		int middle = (begin + end) / 2;
		int compResult = target.compareTo(items[middle]);

		if (compResult == 0)
			return middle;

		else if (compResult < 0) //target ���ڿ��� items[middle]���� �۾��� ��
			return binarySearch(items, target, begin, middle - 1);
		else
			return binarySearch(items, target, middle+1, end);
	}
}

int findMax(int* data, int begin, int end) { //�ִ� ã��
	if (begin == end)
		return data[begin];
	else
		return Math.max(data[begin], findMax(data, begin + 1, end));
}

int main() {
	//0~n���� ����
	/*{
		int n = 10;
		int result = 0;

		result = add(n);

		cout << result << endl;
	}*/

	//���丮��
	/*{
		int result = fact(5);

		cout << result << endl;
	}*/

	//�Ǻ���ġ
	/*{
		int result = fibo(10);

		cout << result << endl;
	}*/

	//�ִ�����
	{
		int result = gcd(4, 10);

		cout << result << endl;
	}
}