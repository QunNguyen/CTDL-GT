#include<iostream>
using namespace std;

int a[1001];
int n;

void in(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void check(int a[], int n)
{
	bool isPar = true;

	int i = 0, j = n - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			isPar = false;
			break;
		}
		else {
			++i; // Tang dau
			--j; // Giam cuoi
		}
	}
	if (isPar == true) {
		in(a, n);
	}
}

void tao(int a[], int n)
{
	in(a, n);
	int i = n - 1;
	while (i>0)
	{
		if (a[i] == 1)
		{
			i--;
		}
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i+1; j <= n; j++)
			{
				a[j] = 0;
			}
			check(a, n);
			i = n - 1;
		}
	}
}


int main()
{
	cin >> n;
	tao(a, n);
}