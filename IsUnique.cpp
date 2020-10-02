#include <bits/stdc++.h>
using namespace std;

bool func(string s, int n)
{
    if (n > 256)
    {
        return false;
    }
    bool charSet[256] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = s[i];
        if (charSet[value])
        {
            return false;
        }
        charSet[value] = true;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (func(s, s.length()))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}