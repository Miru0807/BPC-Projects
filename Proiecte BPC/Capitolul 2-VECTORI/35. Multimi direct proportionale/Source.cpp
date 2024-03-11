#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//2 multimi sunt proportioanale
	int x[100], i, j, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}
	int y[100];
	for (i = 0; i < n; i++) {
		printf("y[%d]= ", i);
		scanf("%d", &y[i]);
	}

	i = 1;
	while (i < n && x[i - 1] * y[i] == x[i] * y[i - 1])
		i++;
	if (i == n)
		printf("Multimile sunt direct proportionale ");
	else printf("Multimile nu sunt direct proportionale ");
}