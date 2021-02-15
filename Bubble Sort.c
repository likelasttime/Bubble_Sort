#include<stdio.h>
#define LEN 5

int main() {
	int num[LEN];
	int temp;
	
	for (int i = 0; i < LEN; i++) {
		scanf_s("%d", &num[i]);			// 배열에 숫자 입력
	}

	for (int i = 0; i < LEN - 1; i++) {			
		for (int j = 0; j < LEN - i-1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j+1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i < LEN; i++) {
		printf("%d", num[i]);			// 오름차순 정렬된 배열 출력
	}
}