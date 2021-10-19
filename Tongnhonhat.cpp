#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n;
		vector<int> a;
		for (int i = 0; i < n; i++)
		{
			cin >> k;
			if (k != 0) a.push_back(k);
		}
		sort(a.begin(), a.end());
		long long x = 0, y = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (i % 2 == 0) x = x * 10 + a[i];
			else y = y * 10 + a[i];
		}
		cout << x + y << endl;
	}
}