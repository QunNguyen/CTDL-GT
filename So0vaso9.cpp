#include<iostream>
#include<queue>
#include<string>
using namespace std;

string slo(int n)
{
	queue<string> a;
	a.push("9");
	while (a.size() > 0)
	{
		string res = a.front();
		a.pop();
		long long tmp = 0;
		for (int i = 0; i < res.size(); i++)
		{
			tmp = 10 * tmp + (int)(res[i] - '0');
			tmp %= n;
		}
		if (tmp == 0)
		{
			return res;
		}
		a.push(res + "0");
		a.push(res + "9");
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << slo(n) << endl;
	}
}