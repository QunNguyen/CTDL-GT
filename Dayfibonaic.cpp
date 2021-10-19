#include<iostream>
using namespace std;

long long F[93];

int main()
{
	int t;
	cin >> t;
	F[1] = F[2] = 1;
	for (int i = 3; i < 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	while (t--)
	{
		long long n, i;
		cin >> n >> i;
		while (n>2)
		{
			if (i <= F[n - 2])
			{
				n -= 2;
			}
			else
			{
				i -= F[n - 2];
				n -= 1;
			}
		}
		if (n == 1) cout << "1";
		else
		{
			cout << "0";
		}
		cout << endl;
	}
	
}