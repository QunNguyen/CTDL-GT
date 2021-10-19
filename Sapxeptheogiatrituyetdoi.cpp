#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool cmp(int a, int b)
{
	return(a > b);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int* a = new int[n];
		int* b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int j = 0; j < n; j++)
		{
			b[j] = abs(x - a[j]);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (b[j] > b[j + 1])
				{
					swap(a[j], a[j + 1]);
					swap(b[j], b[j + 1]);
				}
			}
		}
		for (int j = 0; j < n; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
}