#include<iostream>
using namespace std;

void slove()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1]) i--;
	if (i <=0)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	else
	{
		int k = n;
		while (a[k] < a[i]) k--;
		swap(a[k], a[i]);
		int c = i + 1;
		int b = n;
		while (c<b)
		{
			swap(a[c], a[b]);
			c++;
			b--;
		}
		for (int i = 1; i <=n; i++)
		{
			cout << a[i] << " ";
		}
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