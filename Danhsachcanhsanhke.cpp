#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int v, e;
		// v: dinh 
		// e: canh
		cin >> v >> e;
		vector<int> ke[1000];
		for (int i = 0; i <e; i++)
		{
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}

		for (int i = 1; i <= v; i++)
		{
			sort(ke[i].begin(), ke[i].end());
		}

		for (int i = 1; i <= v; i++)
		{
			cout << i << ": ";
			for (int j = 0; j < ke[i].size(); j++)
			{
				cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

