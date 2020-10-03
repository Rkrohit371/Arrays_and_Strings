#include <bits/stdc++.h>
using namespace std;

int func(string first, string second)
{
    int n1 = first.length();
    int n2 = second.length();
    if (abs(n1 - n2) > 1)
        return false;

    string s1 = n1 > n2 ? second : first;
    string s2 = n1 > n2 ? first : second;
    int index1 = 0;
    int index2 = 0;
    bool check = false;
    while (index1 < n1 && index2 < n2)
    {
        if (s1[index1] != s2[index2])
        {
            if (check)
            {
                return false;
            }
            check = true;
            if (n1 == n2)
            {
                index1++;
            }
        }
        else
        {
            index1++;
        }
        index2++;
    }
    return true;
}

int main()
{
    string first, second;
    cin >> first >> second;
    if (func(first, second))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}