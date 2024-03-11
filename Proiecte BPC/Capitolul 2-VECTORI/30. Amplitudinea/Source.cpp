#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int  main()
{
	int v[100], i, n, min, max, ampl;
     
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	max = v[0], min = v[0];
	for (i = 0; i < n; i++) {

		if (v[i] > max)
			max = v[i];
		if (v[i] < min)
			min = v[i];
	}
	ampl = max - min;
	printf("Amplitudinea este: ");
	printf("%d", ampl);
}