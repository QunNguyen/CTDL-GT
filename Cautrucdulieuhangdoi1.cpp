#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int q, val = 0;
		queue<int> dp;
		cin >> q;
		while (q--)
		{
			int so;
			cin >> so;
			if (so == 1) cout << dp.size() << endl;
			else if (so == 2) (dp.size() > 0) ? cout << "NO" << endl : cout << "YES" << endl;
			else if (so == 3)
			{
				int n;
				cin >> n;
				dp.push(n);
			}
			else if (so == 4 && dp.size() > 0) dp.pop();
			else if (so == 5) (dp.size() > 0) ? cout << dp.front() << '\n' : cout << -1 << '\n';
			else if (so == 6) (dp.size() > 0) ? cout << dp.back() << '\n' : cout << -1 << '\n';
			val = so;
		}
		if (val == 3 || val == 4) cout << endl;
	}
	return 0;
}