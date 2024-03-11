#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Sa se det studentii integralisti, cei bursieri si disciplina cu cei mai multi restantieri
	int a[100][100], m, n, i, j, aux;
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	int integr[100], ok = 1, k = 0;
	int burs[100], k1 = 0;
	float ma;
	for (i = 0; i < m; i++) {
		ok = 1; ma = 0;
		for (j = 0; j < n; j++) {
			ma = ma + a[i][j];
			if (a[i][j] < 5)
				ok = 0;
		}
		if (ok)
			integr[k++] = i;
		ma = ma / n;
		if (ma >= 8.5 && ok == 1)
			burs[k1++] = i;
	}
	printf("Studentii integralisti sunt: ");
	for (i = 0; i < k; i++)
		printf("%d ", integr[i] + 1);

	printf("\n");
	printf("Studentii bursieri sunt: ");
	for (i = 0; i < k1; i++)
		printf("%d ", burs[i] + 1);

	int disc[100], k2 = 0; int max;

	for (j = 0; j < n; j++) {
		k2 = 0;
		for (i = 0; i < m; i++)
			if (a[i][j] < 5)
				k2++;
		disc[j] = k2;
	}
	printf("\n");
	printf("Nr de restantieri pt discipline: ");
	for (j = 0; j < n; j++)
		printf("%d ", disc[j]);

	max = 0;

	for (j = 0; j < n; j++)
		if (disc[j] > max)
			max = disc[j];
	int p = 0;
	int discmaxrestantieri[100];
	for (j = 0; j < n; j++) {
		int cnt = 0;
		for (i = 0; i < m; i++)
			if (a[i][j] < 5)
				cnt++;
		if (cnt == max)
			discmaxrestantieri[p++] = j;
	}
	printf("\n");
	printf("Disciplinele cu numar maxim de restantieri sunt: ");
	for (i = 0; i < p; i++)
		printf("%d ", discmaxrestantieri[i]);

}
