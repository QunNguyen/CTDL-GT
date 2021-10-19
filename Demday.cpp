#include<iostream>
using namespace std;

long long const mod = 123456789;

long long spr(long long x)
{
	return x * x;
}


/*
	2^(n-1)
*/

long long mu(long long n)
{
	if (n == 0) return 1 % mod;
	if (n == 1) return 2 % mod;
	long long p = mu(n / 2);
	if (n % 2 == 0) return (p % mod * p % mod) % mod;
	else return 2 * (spr(p) % mod)% mod;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		n -= 1;
		cout << mu(n) << endl;
	}
}