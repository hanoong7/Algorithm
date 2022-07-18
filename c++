#include <iostream>
using namespace std;

int solution(int N) {
	int sum = 0;
	int count = 100000000;
	int temp = 0;
	while (1) {
		if (N >= count) {
			temp = N / count;
			sum += temp;
			N -= temp * count;
		}
		count /= 10;
		if (count < 1) {
			break;
		}
	}
	return sum;
}
