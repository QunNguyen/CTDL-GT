#include<iostream>
#include<queue>
using namespace std;

/*

b1: 4 3 2 6
b2: 2 3 4 6
b3: 2 3 4 6
      5 4 6 -> 4 5 6
	  4 5 6
*/


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long val;
		priority_queue<long long, vector<long long>, greater<long long>>a;// dua vao gia tri tu nho -> lon
		for (int i = 0; i < n; i++)
		{
			cin >> val;
			a.push(val);
		}
		long long res = 0;

		while (a.size()>1)
		{
			long long x = a.top(); //x=gia tri dau tien
			a.pop();//xoa gia tri dau tien
			// gia tri thu2 -> gia tri thu 1
			long long y = a.top();//y =gia tri thu 2 duoc day len thu 1
			a.pop();
			a.push(x + y);
			res += x + y;
		}
		cout << res << endl;
	}
}
