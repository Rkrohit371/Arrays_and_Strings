#include <bits/stdc++.h>
using namespace std;

bool func(string s, int n)
{
    map<char, int> mp;
    for (auto i : s)
    {
        mp[i]++;
    }
    int count = 0;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    // cout<<s.length();
    if (func(s, s.length()))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}