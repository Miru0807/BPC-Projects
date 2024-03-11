#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//produsul numerelor perfecte
	int v[100], i, j, n; 

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int s;
	int p = 1;
	for (i = 0; i < n; i++)
	{
		s = 0;
		for(j=1;j<=v[i]-1;j++)
		if (v[i] % j == 0)
			s = s + j;
		if (s == v[i])
			p = p * v[i];
	}
	
	printf("%d ", p);

}