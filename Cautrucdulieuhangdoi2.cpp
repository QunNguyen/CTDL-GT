#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	queue<int> d;
	for (int i = 0; i < t; i++)
	{
		string s;
		int n;
		cin >> s;
		if (s == "PUSH")
		{
			cin >> n;
			d.push(n);
		}
		if (s == "POP"&&d.empty()==0) d.pop();
		if (s == "PRINTFRONT")
		{
			if (d.size() > 0) cout << d.front();
			if (d.empty() != 0) cout << "NONE";
		}
		cout << endl;
	}
}