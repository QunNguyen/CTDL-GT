#include<iostream>
#include <vector>
using namespace std;

long long b[10001] = { 0 };
long long np(int n)
{
	vector<int> a;
	while (n)
	{
		a.push_back(n % 2); // doi sang nhi phan chia du cho 2 ;
		n /= 2;
	}
	long long res = 0;
	for (int j = a.size() - 1; j >=0; j--)
	{
		res = res * 10 + a[j];
	}
	return res;
}

void Pre(int n)
{
	b[0] = 0;
	b[1] = 1;
	for (int i = 2; i<= n; i++)
	{
		b[i] = np(i);
	}
}


int main()
{
	int t;
	cin >> t;
	Pre(10000);
	while (t--)
	{
		int n;
		cin >> n;
		for (int i= 1; i <= n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
}