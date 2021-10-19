#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int a[100001], b[100001];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				cout << i+1 << " ";
				break;
			}
		}
		for (int i = n-1; i >=0; i--)
		{
			if (a[i] != b[i])
			{
				cout << i+1 << " ";
				break;
			}
		}
		cout << endl;
	}
}