#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		string s;
		cin >> s;
		int d[300] = { 0 };// dem ki tu
		int max = 0;
		for (int i = 0; i < s.size(); i++)
		{
			d[s[i]]++; // dem ki tu neu ki tu xuat hien se tang gia bo dem
			if (max<d[s[i]]) max = d[s[i]];// dem ki tu nao xuat hien nhieu nhat
		}
		if ((max - 1) * (k - 1) > s.size() - max) cout << -1;
		else cout << 1;
		cout << endl;
	}
}
/*
	d-1: vi tri khoang cach giua 2 ki tu ging nhau 
	
	vi tri thu te co : (max-1)*(k-1)
	vi tri li thuyet : s.size()-max

*/
