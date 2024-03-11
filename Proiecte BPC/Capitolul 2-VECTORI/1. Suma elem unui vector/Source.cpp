#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//Suma elementelor unui vector
	int v[100], n, i, s = 0;
	printf("n= ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++)
		s = s + v[i];

	printf("%d", s);
}