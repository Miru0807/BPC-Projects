#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int v[], int* n)
{
	int i;
	scanf("%d", n);
	for (i = 0; i < *n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
}
void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}
void crescatoare(int v[], int n, int* ok);

//Am facut un mic trick: am facut subprogramul crescatoare si l-am pus sub main
// dar pentru a fi asta posibil trb sa copiati antetul deasupra si sa puneti ;
//E acelasi lucru am zis doar sa va arat ca se poate
int main()
{
	int v[100], i, n;
	citire(v, &n);
	afisare(v, n);
	printf("\n\n");
	int ok;
	crescatoare(v, n, &ok);
	if (ok)
		printf("Are vanzari crescatoare");
	else printf("Vanzarile nu sunt crescatoare");
}

void crescatoare(int v[], int n, int* ok)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		*ok = 1;
		if (v[i] > v[i + 1])
			*ok = 0;
	}

}