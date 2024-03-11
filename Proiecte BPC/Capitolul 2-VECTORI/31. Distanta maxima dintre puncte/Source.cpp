#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int  main()
{
	int v[100], i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int y[100], j, m;
	scanf("%d", &m);
	for (j = 0; j < m; j++) {
		printf("y[%d]= ", j);
		scanf("%d", &y[j]);
	}
	float d;
	float max = 0;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			d = sqrt(pow((y[j] - y[i]), 2) + pow((v[j] - v[i]), 2));
	if (d > max)
		max = d;
	printf("%.2f", max);
}