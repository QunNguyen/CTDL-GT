#include<iostream>
using namespace std;


void xuat(int a[], int k)
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
}

void slove()
{
	int k, n;
	int a[1001];
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> a[i];
	}
	int i = k;
	while (i > 0 && a[i] == n + i - k) i--;
	if (i <= 0)
	{
		for (int i = 1; i <= k; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	else
	{
		a[i] += 1;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = a[j - 1] + 1;
		}
		xuat(a, k);
		cout << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		slove();
	}
}