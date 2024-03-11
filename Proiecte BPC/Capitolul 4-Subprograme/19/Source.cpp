#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}
void afisare(int a[][100], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
void consmin(int a[][100], int m, int n, int y[100], int *k)
 {
	int i, j, ok;
	*k = 0;
	int s[100];
	for (j = 0; j < n; j++) {
		s[j] = 0;
		for (i = 0; i < m; i++)
			s[j] = s[j] + a[i][j];
	}

	int min = s[0];
	for (j = 1; j < n; j++)
		if (s[j] < min)
			min = s[j];
	printf("\n");
	for (i = 0; i < n; i++)
		printf("Consumul din ziua %d este %d\n", i+1, s[i]);

	int s1[100];
	for (j = 0; j < n; j++)
	{
		s1[j] = 0;
		for (i = 0; i < m; i++)
			s1[j] = s1[j] + a[i][j];

		if (s1[j] == min)
			y[(*k)++] = j;
	}
}


int main()
{  //zilele cu consumuri minime
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);

	int k; int y[100];
	consmin(a, m, n, y, &k);
	for (i = 0; i < k; i++)
		printf("%d ", y[i]);


}