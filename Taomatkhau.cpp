#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

static const char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ""abcdefghijklmnopqrstuvwxyz""0123456789""!@#$%^&*";


char randomAlpha() {
    int doDaiChuoi2 = sizeof(alpha) - 1;
    return alpha[rand() % doDaiChuoi2];
}


int check(string s) {
    if (s.size() <= 6) return 0;
    int kt = 0;
    int chuhoa = 0;
    int chuthuong = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 64 || s[i] == 37 || s[i] == 38) {
            kt++;
        }
        if (65 <= s[i] && s[i] <= 90) {
            chuhoa++;
        }
        if (97 <= s[i] && s[i] <= 122) {
            chuthuong++;
        }
    }
    if (kt > 0 && chuhoa > 0 && chuthuong > 0) {
        return 1;
    }
    return 0;
}


int main() {
    int x;
    cout << "Vui long nhap do dai mat khau :";
    cin >> x;
    if (x < 6) {
        cout << "Do dai mat khau phai > 6, Vui long nhap lai :";
        cin >> x;
    }
    if (x >= 6) {
        srand(time(0));
        string str = "";
        for (unsigned int i = 0;; i++) {
            str = "";
            for (unsigned int i = 0; i < x; i++) {
                str = str + randomAlpha();
            }
            if (check(str) == 1) {
                cout << "Mat khau goi y cho ban la: ";
                cout << str << endl;
                break;
            }
        }
    }
}