#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
	int v[100], i,j, n, cmmdc1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int a = v[0], b;
	for (i = 1; i < n; i++) {
		b = v[i];
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else b = b - a;

		}
	}
	printf("Cmmdc este %d", a);
}