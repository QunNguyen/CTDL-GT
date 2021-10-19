#include<iostream>
#include<algorithm>
using namespace std;

long long tong(int a[], int vt, int n)
{
	long long sum = 0;
	for (int j = vt; j <= n; j++)
	{
		sum += a[j];
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		int a[10001];
		cin >> n >> k;
		int x = min(k, n - k);
		for (int i = 0; i <n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		cout <<tong(a, x, n-1) - tong(a, 0, x-1);
		cout << endl;

	}
}
