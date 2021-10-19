#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[1001];
		int n,c,b;
		cin >> n;
		long long min = 1000000000;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (abs(a[i] + a[j]) < min && i != j) {
					min = abs(a[i] + a[j]);
					c = i;
					b = j;
				}
			}
		}
		cout << a[c] + a[b] << endl;
	}
}
