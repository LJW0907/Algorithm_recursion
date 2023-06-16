#include <iostream>
#include <math.h>
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

void printBinary(int n) { //십진수를 이진수로 변환 출력
	if (n < 2)
		cout << n;
	else {
		printBinary(n / 2);
		cout << n % 2;
	}
}

int search(int* data, int begin, int end, int target) { //recursion 순차 탐색 -응용 버전
//이진 탐색과 유사한 방식이나, '정렬된 배열'이라는 이진 탐색의 조건을 충족하지 않으므로 아니다.
	if (begin > end)
		return -1;
	else {
		int middle = (begin + end) / 2;

		if (data[middle] == target)
			return middle;

		int index = search(data, begin, middle - 1, target); //중점을 기준으로 앞쪽 탐색

		if (index != -1)
			return index;
		else
			return search(data, middle + 1, end, target); //못 찾았으면 중점 뒤쪽 탐색
	}
}

int binarySearch(String[] items, String target, int begin, int end) { //문자열 크기 이진 비교
	if (begin > end)
		return  -1;
	else {
		int middle = (begin + end) / 2;
		int compResult = target.compareTo(items[middle]);

		if (compResult == 0)
			return middle;

		else if (compResult < 0) //target 문자열이 items[middle]보다 작았을 시
			return binarySearch(items, target, begin, middle - 1);
		else
			return binarySearch(items, target, middle+1, end);
	}
}

int findMax(int* data, int begin, int end) { //최댓값 찾기
	if (begin == end)
		return data[begin];
	else
		return Math.max(data[begin], findMax(data, begin + 1, end));
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