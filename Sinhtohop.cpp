#include<iostream>
#include<vector>
using namespace std;
int n, k;
int a[100];

void xuat()
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i];
	}
	cout << " ";
}

void sinh(int &ok)
{
	int i = k;
	while (i > 0 && a[i] == n + i - k)
	{
		i--;
	}
	a[i]++;
	if (i > 0)
	{
		for (int j = i + 1; j <= n; j++)
		{
			a[j] = a[i] + j - i;
		}
	}
	else ok = 0;
}

void tao(int ok)
{
	for (int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
	while (ok)
	{
		xuat();
		sinh(ok);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int ok = 1;
		cin >> n >> k;
		tao(ok);
		cout << endl;
	}
}


