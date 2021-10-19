#include<iostream>
#include<algorithm>
using namespace std;

const long long mod = 1e9 + 7;

long long check(int a[], int n)
{
	long long sum = 0;
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * i;
	}
	return sum % mod;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int  n;
		cin >> n;
		int a[10000000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << check(a, n) << endl;
	}
}