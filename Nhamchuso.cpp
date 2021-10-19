#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int chuyenso(string a)
{
	int x;
	stringstream convert(a);
	convert >> x;
	return x;
}

int main()
{
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '6') a[i] = '5';
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (b[i] == '6') b[i] = '5';
	}
	cout << chuyenso(a) + chuyenso(b)<<" ";
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '5') a[i] = '6';
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (b[i] == '5') b[i] = '6';
	}
	cout << chuyenso(a) + chuyenso(b)<<endl;
	
}