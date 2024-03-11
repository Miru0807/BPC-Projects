#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int prim(int n)
{
	int i, cnt = 0;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			cnt++;
	if (cnt == 0)
		return 1;
	else
		return 0;
}

int  main()
{
	int v[100], i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int y[100]; int m, j, k=0,p=0;
	
	
	for (i = 0; i < n; i++)
		if (prim(v[i])&&v[i]>1)
			y[p++] = v[i];
	
	for (i = 0; i < p; i++)
		printf("%d ", y[i]);
}
