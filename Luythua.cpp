#include<iostream>
using namespace std;

const long long mod = 1e9 + 7;

long long luythua(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b % 2 != 0) res = (res % mod * a % mod) % mod;
		a = (a % mod * a % mod) % mod;
		b /= 2;
	}

	return res;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		cout << luythua(n,k) << endl;
	}
}


