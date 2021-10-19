
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		int s = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if (a[i] == 0) s++;
		}
		cout << s;
		cout << endl;
	}
}