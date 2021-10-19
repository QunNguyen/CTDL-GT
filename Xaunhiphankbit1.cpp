#include<iostream>
using namespace std;

int a[100];


void in(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void bang0(int a[], int n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = 0;
	}
}

void check(int a[], int n, int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			dem++;
		}
	}
	if (dem==k)
	{
		in(a, n);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int k;
		cin >> n >> k;
		int i = n - 1;
		while (i > 0)
		{
			if (a[i] == 1)
			{
				i--;
			}
			if (a[i] == 0)
			{
				a[i] = 1;
				bang0(a, n, i + 1);
				check(a, n, k);
				i = n - 1;
			}
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			a[i] = 0;
		}
	}
}