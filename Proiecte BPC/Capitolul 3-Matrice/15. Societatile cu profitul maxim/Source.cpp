#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Societati cu profit maxim
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int v[100], p = 0;
	int s[100];
	for (i = 0; i < m; i++)	{
		s[i] = 0;
		for (j = 0; j < n; j++)
			s[i]= s[i] + a[i][j];
	}

 int max = s[0];
	for (i = 1; i < m; i++)
		if (s[i] > max)
			max = s[i];

	int sum = 0;
	for (i = 0; i < m; i++)
	{
		sum = 0;
		for (j = 0; j < n; j++)
			sum=sum+a[i][j];
		if (sum == max)
			v[p++] = i ;
	}
	printf("\nSocietatile cu profit maxim sunt : ");
	for (i = 0; i < p; i++)
		printf("%d ", v[i]+1);

}