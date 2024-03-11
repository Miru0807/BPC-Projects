#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Matrice cu puncte sa
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	
	int minL[100];

	for (i = 0; i < m; i++) {
		minL[i] = a[i][0];
		for(j=1;j<n;j++)
			if(a[i][j]<minL[i])
				minL[i]=a[i][j];
	}

	int maxC[100];

	for (j = 0; j < n; j++) {
		maxC[j] = a[0][i];
		for (i = 1; i < m; i++)
			if (a[i][j] > maxC[j])
				maxC[j] = a[i][j];
	}


	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("Elementul sa este: ");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (minL[i] == maxC[j])
				printf("%d ", a[i][j]);

}