#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Fie o matrice de dim mxn reprezentand consumurile de energie pentru fabricarea a m produse intr-o
	//perioada de n zile. Sa se scrie programul care det care produse au avut consumuri constante pe intreaga perioada
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
	int v[100], p = 0; 
	int ok = 1;
	for (i = 0; i < m; i++) {
		ok = 1;
		for (j = 1; j < n; j++)
			if (a[i][j] != a[i][0])
				ok = 0;
		if (ok)
			v[p++] = i;
	}
	if (p)
		for (i = 0; i < p; i++)
			printf("%d ", v[i]);
	else printf("Nu sunt produse cu consum constant");
}