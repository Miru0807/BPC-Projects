#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//BUBBLE SORT

	int v[100], n, i, aux,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int p = 1;

	do {
		p = 0;
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if (v[i] > v[j])
				{
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
					p = 1;
				}
	} while (p != 0);

		for (i = 0; i < n; i++)
			printf("%d ", v[i]);
}