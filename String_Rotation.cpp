#include <bits/stdc++.h>
using namespace std;

bool func(string s1, string s2, int n)
{
    for (int i = 1; i < n; i++)
    {
        string first = s1.substr(0, i);
        string second = s1.substr(i);
        if (second + first == s2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "True";
        }
        else if (s1.length() != s2.length())
        {
            cout << "False";
        }
        else if (func(s1, s2, s1.length()))
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
        cout<<endl;
    }
    return 0;
}