#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin >> n>>k;
		int a[10001];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == k)
			{
				dem++;
				cout << i;
				break;
			}
		}
		if (dem == 0) cout << "NO";
		cout << endl;
	}
}