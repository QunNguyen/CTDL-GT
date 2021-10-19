#include<iostream>
#include<vector>
using namespace std;

void slove()
{
	int n;
	cin >> n;
	int a[100][100];
	for (int j = 1; j <=n; j++)
	{
		cin >> a[1][j];
	}

	int cot = n - 1;
	for (int i = 2; i <=n; i++)
	{
		for (int j = 1; j <= cot; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
		}
		cot--;
	}

	// khoi tao vector luu mang (giam phan tu dan)
	cot = n;
	vector < vector<int>> res; // vector 2 chieu
	for (int i = 1; i <= n; i++)
	{
		vector<int> x;
		for (int j = 1; j <= cot; j++)
		{
			x.push_back(a[i][j]); // vector bat dau tu 0
		}
		cot--;
		res.push_back(x);
	}

	for (int i = res.size()-1; i >= 0; i--)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			if (j == 0) cout << "[";
			cout << res[i][j];
			if (j == res[i].size() - 1) cout << "] ";
			if (j < res[i].size() - 1) cout << " ";
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		slove();
		cout << endl;
	}
}
