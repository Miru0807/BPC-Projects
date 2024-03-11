#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{ 
	//suma elementelor masivului
	int a[5][5][5], m, n, l, i, j, k, s = 0;
	scanf("%d", &k); scanf("%d", &m); scanf("%d", &n);
	
	for (l = 0; l < k; l++)
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++)
			{
				printf("a[%d][%d][%d]= ", l, i, j);
				scanf("%d", &a[l][i][j]);
			}
	
	for (l = 0; l < k; l++)
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
				printf("%d ", a[l][i][j]);
				printf("\n");
			}
	}
	s = 0;
	for (l = 0; l < k; l++)
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				s = s + a[l][i][j];

	printf("%d", s);

}