#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
	stack<int> stk;
	int x;
	int n = 200;
	vector<int> a;
	while (n>0)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			cin >> x;
			a.push_back(x);
		}
		if (s == "pop"&&a.size()>0) a.erase(a.end()-1);
		if (s == "show")
		{
			if (a.size() == 0) cout << "empty" << endl;
			else
			{
				for (int i = 0; i <a.size(); i++)
				{
					cout << a[i] << " ";
				}
				cout << endl;
			}
		}
		n--;
	}
}