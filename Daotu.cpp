#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >>t ;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin,s);
		s[s.size()] = ' ';
		deque<string> a;
		string b = "";
		for (int i = 0; i <=s.size(); i++)
		{
			if (s[i]==' ')
			{
				a.push_back(b);
				b = "";
			}
			else
			{
				b += s[i];
			}
		}
		while (a.empty() == 0)
		{
			cout << a.back()<<" ";
			a.pop_back();
		}
		cout << endl;
	}
}