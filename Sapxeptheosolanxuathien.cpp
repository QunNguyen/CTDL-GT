#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int check[100000] = { 0 };
        int a[1001], max = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            check[a[i]]++;
            if (max < check[a[i]])
                max = check[a[i]];
        }
        sort(a, a + n);

        for (int k = max; k >= 1; k--) //duyet so lan lơn nhat 
        {
            int count = 0; 
            for (int i = 0; i < n; i++) 
            {
                count++;
                if (a[i] != a[i + 1] && count != k)// reset gia tri dem khi chuyen sang so khac 
                    count = 0;

                if (count == k && a[i] != a[i + 1]) // t/m dieu kien so lan xuat hien dung v so dang sau ko giong -> in ra so lan xuat hien cua so do
                {
                    for (int j = 0; j < k; j++)
                        cout << a[i] << " ";
                    count = 0;
                }
            }
        }
        cout << endl;
    }
}