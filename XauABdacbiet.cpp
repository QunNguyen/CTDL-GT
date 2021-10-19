#include<iostream>
using namespace std;

int a[100];


void in(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0) cout << "A";
		else cout << "B";
	}
	cout << endl;
}

void bang0(int a[], int n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = 0;
	}
}

bool check(int a[], int n, int k)
{
	int cnt = 0;
	int kt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			++cnt;
		}
		else {
			if (cnt > k) return false;
			else if (cnt == k) kt = 1;
			cnt = 0;
		}
	}
	if (a[n] == 0) {
		if (cnt > k) return false;
		else if (cnt == k) kt = 1;
	}
	return kt == 1;
	
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << n << endl;
	int i = n - 1;
	while (i > 0)
	{
		if (a[i] == 1)
		{
			i--;
		}
		if (a[i] == 0)
		{
			a[i] = 1;
			bang0(a, n, i + 1);
			if (check(a, n, k) == true)
			{
				in(a, n);
			}
			i = n - 1;
		}
	}
}

/* 
#include<iostream>
#include<vector>
using namespace std;
int n, k, a[20] = { 0 };
bool ok;
void sinh() {
	int i = n;
	while (i > 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		ok = false;
	}
	else {
		a[i] = 1;
	}
}

int check() {
	int cnt = 0;
	int res = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) {
			cnt++;
		}
		else {
			if (cnt > k) return 0;
			else if (cnt == k) res = 1;
			cnt = 0;
		}
	}
	if (a[n] == 0) {
		if (cnt > k) return 0;
		else if (cnt == k) res = 1;
		cnt = 0;
	}
	return res == 1;
}

string in() {
	string s = "";
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) s += 'A';
		else s += 'B';
	}
	return s;
}
int main() {
	cin >> n >> k;
	ok = true;
	int cnt = 0;
	vector<string> res;
	while (ok) {
		if (check()) {
			cnt++;
			string s = in();
			res.push_back(s);
		}
		sinh();
	}
	cout << cnt << endl;
	for (string x : res) {
		cout << x << endl;
	}
}
*/