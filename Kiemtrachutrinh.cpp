#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1001];
		vector<int> b[1001];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i <=10; i++)
		{
			b[i][0] = 0;
		}
		for (int i = 0; i < n; i++)
		{
			b[a[i]][0]++;
		}
		
		for (int i = 0; i < n; i++)
		{
			sort(b[i].begin(), b[i].end());
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
}