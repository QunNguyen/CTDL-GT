#include<iostream>
using namespace std;
int n, a[100], dem;
bool b[25], x[25], N[25];

void Try(int i) {

    for (int j = 1; j <= n; j++) {
        if (b[j] && x[i - j + n] && N[i + j - 1]) 
        {
            a[i] = j;
            b[j] = false; 
            x[i - j + n] = false;
            N[i + j - 1] = false;
            if (i == n)
                {
                    dem++;
                }
            else
                {
                    Try(i + 1);
                }
            b[j] = true; 
            x[i - j + n] = true; 
            N[i + j - 1] = true;
        }
    }
}
int main() {
    int t; 
    cin >> t;
    while (t--) {
        dem = 0;
        cin >> n;
        for (int i = 0; i <= 2 * n; i++)
        {
            b[i] = true; 
            x[i] = true; 
            N[i] = true;
        }
        Try(1);
        cout << dem << endl;
    }
}