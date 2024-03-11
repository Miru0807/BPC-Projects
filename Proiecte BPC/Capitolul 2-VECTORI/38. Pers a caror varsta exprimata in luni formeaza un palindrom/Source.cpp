#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pdrom(int n)
{
	int invers = 0;
	int m = n*12;
	while (m)
	{
		invers = invers * 10 + m % 10;
		m /= 10;
	}
	if (invers == n*12)
		return 1;
	return 0;
}

void main()
{
	/*Fie un vector care reprezinta varsta exprimata in ani a n persoane
	sa se determine persoanele a caror varsta exprimata in luni formeaza un nr palindrom
	*/

	int v[100],y[100],p=0, n, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (pdrom(v[i]))
			y[p++] = i;
	}


	//Ca sa vedeti care este varsta care inmultita cu 12 e un palindrom la linia 35 puneti v[i] in loc de i. 
	//Eu am folosit exemplu //n=3 ->3(*12=36 care nu e pdrom)  11(*12=132 nu 121 deci nu e pdrom) si 37(*12=444 deci pdrom)
	//Puteti folosi si metoda din carte doar ca mie imi da eroare si nu stiu de ce asa ca am facut-o pe asta ca e mai simpla
	printf("Persoana care a avut varsta exprimata in luni un nr palindrom este: \n");
	for (i = 0; i < p; i++)
		printf("%d ", y[i]+1);
}