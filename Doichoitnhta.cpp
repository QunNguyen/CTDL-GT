#include<iostream>
using namespace std;


void sapxep(int a[], int n)
{
	int min;
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			dem++;
			swap(a[i], a[min]);
		}
	}
	cout << dem << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sapxep(a, n);
	}
}