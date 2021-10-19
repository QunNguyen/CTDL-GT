#include<iostream>
using namespace std;

void in(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i == 1) cout << "[";
		if (i == n)
		{
			cout << a[i] << "]";
		}
		else {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}

void XoaPhanTu(int a[], int& n, int pos) {
	pos = n - 1;
	for (int i = pos; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	--n;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[100];
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		in(a, n);
		int j = n;
		while (j > 0)
		{
			int h = n;
			for (int k = 1; k <= h; k++)
			{
				a[k] = a[k] + a[k + 1];
			}
			XoaPhanTu(a, n, h - 1);
			in(a, n);
			h--;
			j--;
		}
	}
}