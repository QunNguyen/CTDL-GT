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
		vector<int> b;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int Max, sum;
		for (int i = 0; i < n; i++)
		{
			Max = a[i];
			sum = 0;
			for (int j = i; j < n; j++)
			{
				sum += a[j];
				if (sum > Max) Max = sum;
			}
			b.push_back(Max);
		}
		sort(b.begin(),b.end());
		cout << b[b.size()-1] << endl;
	}
}