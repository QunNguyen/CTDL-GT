#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (st.empty() == 0 && st.top() == '(')
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    int count = 0;
    int size = st.size();
    while (st.empty() == 0 && st.top() == '(')
    {
        st.pop();
        count++;
    }
    return (size / 2) + (count % 2);
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}