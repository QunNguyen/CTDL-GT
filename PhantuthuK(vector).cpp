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
		int n, m;
		cin >> m >> n;
		int s = m + n;
		int k;
		cin >> k;
		vector<int> a(m + n);
		for (int i = 0; i < m + n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		cout << a[k-1] << endl;;
	}
}