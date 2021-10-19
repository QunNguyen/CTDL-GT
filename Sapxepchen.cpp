#include<iostream>
using namespace std;

void xuat(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void sapxep(int a[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
		cout << "Buoc " << i << ": ";
		xuat(a, i+1);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Buoc " << "0: " << a[0] << endl;
	sapxep(a, n);
}
