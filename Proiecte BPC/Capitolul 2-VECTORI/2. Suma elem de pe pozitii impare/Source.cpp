#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//Suma elementelor de rang impar unui vector
	int v[100], n, i, s = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i=i+2)
		s = s + v[i];

	printf("%d", s);
}