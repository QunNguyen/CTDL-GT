#include<iostream>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[10001];
		int res = 0;
		for (int i = 1; i <=n; i++)
		{
			cin >> a[i];
		}
		int dp[1001] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			dp[i] = 1; // dem tung so lam moc
			for (int j = 1; j <i; j++)
			{
				if (a[i] >= a[j])
				{
					dp[i] = max(dp[i], dp[j] + 1);//gan max tim duoc o moi moc
				}
				res = max(res, dp[i]);// luu lai max 
			}
		}
		cout << n - res << endl;
	}
}