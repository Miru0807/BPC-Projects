#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int* reuniune(int* v, int* y, int m, int n,int *p) {
	
	int i, j;
	 *p = 0;
	 int* z = (int*)malloc((m + n) * sizeof(int));
	 
	 for (i = 0; i < n; i++)
		 z[(*p)++] = v[i];

	 i = 0;
	 for (j = 0; j<m; j++) {
		 i= 0;
		 while (i < n && y[j] != v[i])
			 i++;
		 if (i == n)
			 z[(*p)++] = y[j];
	 }
	 return z;
}

int main()
{
	int m, n, i, j;
	
	scanf("%d", &n);
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	scanf("%d", &m);
	int* y = (int*)malloc(m * sizeof(int));
	for (i = 0; i < m; i++) {
		printf("y[%d]= ", i);
		scanf("%d", &y[i]);
	}
	int p;
	int* z = reuniune(v, y, m, n, &p);

	for (i = 0; i < p; i++)
		printf("%d ", z[i]);
	


}