#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int i = s.size() - 1;
		while (s[i] == '0' && i >= 0)
		{
			i--;
		}
		if (i < 0)
		{
			for (int j = 0; j < s.size(); j++)
			{
				cout << 1;
			}
		}
		else
		{
			s[i] = '0';
			for (int j = i + 1; j < s.size();j++)
			{
				s[j] = '1';
			}
			cout << s;
		}
		cout << endl;
	}
}