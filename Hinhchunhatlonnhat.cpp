#include<iostream>
#include <algorithm>
using namespace std;


int tinh(int giatri, int n, int a[])
{
	int dem = 0;
	int Max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= giatri)
		{
			dem++;
			if (dem > Max) Max = dem;
		}
		else
		{
			dem = 0;
		}
	}
	return Max;
}

int main()
 { 
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int Max = 0;
		for (int i = 0; i < n; i++)
		{
			int dt = a[i] * tinh(a[i], n, a);
			if (Max < dt) Max = dt;
		}
		cout << Max << endl;
	}
}