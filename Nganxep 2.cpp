#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<int> a;
	int x;
	while (t--)
	{
		string s;
		cin >> s;
		if (s == "PUSH")
		{
			cin >> x;
			a.push_back(x);
		}
		if (s == "POP" && a.size() > 0) a.erase(a.end() - 1);
		if (s == "PRINT")
		{
			if (a.size() == 0) cout << "NONE" << endl;
			else cout << a[a.size()-1];
			cout << endl;
		}
	}
}