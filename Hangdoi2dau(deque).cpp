#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int t;
	cin >> t;
	deque<int> dp;
	while(t--)
	{
		string s;
		cin >> s;
		int n;
		if (s == "PUSHFRONT")
		{
			cin >> n;
			dp.push_front(n);
		}
		if (s == "PRINTFRONT")
		{
			if(dp.size()>0) cout<<dp.front();
			if (dp.empty() != 0) cout << "NONE";
		}
		if (s == "POPFRONT")
		{
			if (dp.size() > 0) dp.pop_front();
		}
		if (s == "PUSHBACK")
		{
			cin >> n;
			dp.push_back(n);
		}
		if (s == "PRINTBACK")
		{
			if(dp.size()>0) cout<<dp.back();
			if (dp.empty() != 0) cout << "NONE";
		}
		if (s == "POPBACK")
		{
			if (dp.size()>0) dp.pop_back();
		}
		cout << endl;

	}
}