#include<stdio.h>

int main() {
	int n;
	int arr[1000];
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		if ( arr[i] >= 0 && arr[i] < 10) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
