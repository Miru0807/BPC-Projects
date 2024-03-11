#include<iostream>

using namespace std;


int main()
{
    int x[100], m, y[100], z[200], n, k, i, j, ok;

    cin >> n;
    for (i = 0; i < n; i++)
        cin >> y[i];

    cin >> m;
    for (i = 0; i < m; i++)
        cin >> x[i];
    k = 0;
    for (i = 0; i < n; i++)
        z[k++] = y[i];

    for (i = 0; i < m; i++)
    {
        ok = 1;
        for (j = 0; j < n; j++)
            if (x[i] == y[j]) ok = 0;
        if (ok) {
            z[k] = x[i]; k++;
        }
    }

    for (i = 0; i < k; i++)
        cout << z[i] << " ";

    return 0;
}