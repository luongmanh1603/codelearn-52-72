#include<stdio.h>

int main() {
	int k;
	char s[100];
	scanf("%s", s);
	scanf("%d", &k);
	printf("%c", s[k - 1]);
	return 0;
}
