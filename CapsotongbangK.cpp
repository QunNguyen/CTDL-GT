﻿#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		int a[100];
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		int dem = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (a[i] + a[j] == k)
				{
					dem++;
				}
			}
		}
		cout << dem << endl;
		cout << endl;
	}
}