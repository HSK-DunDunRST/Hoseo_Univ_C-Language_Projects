#include <stdio.h>

int main() {
	int n; // 상품 종류 개수
	scanf("%d", &n);
	int enterEntity[100];
	int salesEntity[100];
	int stockEntity[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &enterEntity[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &salesEntity[i]);
	}
	for (int i = 0; i < n; i++) {
		stockEntity[i] = enterEntity[i] - salesEntity[i];
	}
	int id;
	scanf("%d", &id);
	// ID는 1부터 시작하므로 배열 인덱스는 id-1
	printf("%d\n", stockEntity[id-1]);
	for (int i = 0; i < n; i++) {
		printf("%d", stockEntity[i]);
		if (i != n-1) printf(" ");
	}
	printf("\n");
	return 0;
}