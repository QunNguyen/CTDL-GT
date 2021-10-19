#include<iostream>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int s, d;
		cin >> s >> d;
		stack<int> a;
		while (s > 0)
		{
			d--;
			if (s > 9)
			{
				a.push(9);
				s -= 9;
			}
			else
			{
				a.push(s);
				break;
			}
		}

		if (d < 0) cout << -1;
		else
		{
			if (d > 0)
			{
				int so = a.top();
				a.pop();
				a.push(so - 1);
				while (d > 1)
				{
					a.push(0);
					d--;
				}
				a.push(1);
			}
			while (a.size() > 0)
			{
				cout << a.top();
				a.pop();
			}
		}
		cout << endl;
	}
}