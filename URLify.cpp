#include <bits/stdc++.h>
using namespace std;

string func(string s, int n)
{
    string insert = "%20";
    string final;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            final += insert;
        }
        else
        {
            final += s[i];
        }
    }
    return final;
}

int main()
{
    string s;
    getline(cin, s);
    // cout<<s.length();
    cout << func(s, s.length());
    return 0;
}