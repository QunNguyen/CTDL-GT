#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[100001];
		vector<int> b;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			while (a[i]!=0)
			{
				int x = a[i] % 10;
				b.push_back(x);
				a[i] /= 10;
			
			}
		}
		sort(b.begin(), b.end());
		for (int i = 0; i < b.size(); i++)
		{
			if (i == b.size() - 1)
			{
				cout << b[i];
				break;
			}
			if (b[i] == b[i + 1])
			{
				continue;
			}
			else cout << b[i] << " ";
		}
		cout << endl;
	}
}