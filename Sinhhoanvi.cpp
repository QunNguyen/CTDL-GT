#include<iostream>
#include<iomanip>
using namespace std;

void sinh(int a[], int n, int& ok)
{
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1])
	{
		i--;
	}
	if (i > 0)
	{
		int k = n;
		while (a[i] > a[k]) k--;
		swap(a[i], a[k]);
		int r = i + 1;
		int s = n;
		while (r <= s)
		{
			swap(a[r], a[s]);
			r++;
			s--;
		}
	}
	else ok = 0;
}

void xuat(int a[], int n)
{
	for (int i = 1; i <=n; i++)
	{
		cout << a[i];
	}
	cout << " ";
}


void next(int a[], int n, int ok)
{
	while (ok)
	{
		xuat(a, n);
		sinh(a, n, ok);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[1000];
		int n, ok = 1;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			a[i] = i;
		}
		next(a, n, ok);
		cout << endl;
	}
}