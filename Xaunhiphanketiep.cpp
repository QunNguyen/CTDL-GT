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
		int i = s.length() - 1;
		while (s[i] == '1' && i >= 0)
		{
			i -= 1;
		}
		if (i < 0)
		{
			for (int i = 0; i < s.length(); i++)
			{
				cout << 0;
			}
		}
		else
		{
			s[i] = '1';
			for (int j = i + 1; j < s.length(); j++)
			{
				s[j] = '0';
			}
			cout << s;
		}
		cout << endl;
	}
}