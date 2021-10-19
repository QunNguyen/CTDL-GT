#include<iostream>
using namespace std;

int main()
{
	int a[] = { 1000,500,200,100,50,20,10,5,2,1 };
	int n=10;
	int t;
	cin >> t;
	while (t--)
	{
		long long k, res = 0;
		cin >> k;
		for (int i = 0; i < n; i++)
		{
			res += k / a[i];
			k%= a[i];
		}
		cout << res << endl;
	}
	return 0;
}