#include <stdio.h>
#include <stdlib.h>


void main() {

	int N = 0, J = 0;
	int sum = 0;
	scanf("%d %d", &J, &N);
	//사탕의 개수 J, 상자의 개수 N개(모두 크기 다름)

	int* r = malloc(N * sizeof(int));
	int* c = malloc(N * sizeof(int));
	int* box = malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &r[i], &c[i]);
		box[i] = r[i] * c[i];
	}
	//가로세로 입력하고 박스는 가로랑 세로 곱한 거. 


	int temp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (box[i] < box[j]) {
				temp = box[j];
				box[j] = box[i];
				box[i] = temp;
			}
		}
	}
	//box를 내림차순으로 정렬

	for (int i = N - 1; i >= 0; i--) {
		if (J - box[i] > 0) {
			J -= box[i];
			sum++;
		}
	}
	//박스 총 몇개 필요한지 count


	printf("%d", sum);

}