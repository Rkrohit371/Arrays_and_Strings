#include <bits/stdc++.h>
using namespace std;

bool func(vector<vector<int>> &arr)
{
    if (arr.size() == 0 || arr.size() != arr[0].size())
    {
        return false;
    }
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n-1-i; j++)
        {
            int top = arr[i][j];
            arr[i][j] = arr[n - 1 - j][i];
            arr[n - 1 - j][i] = arr[n - 1 - i][n - 1 - j];
            arr[n - 1 - i][n - 1 - j] = arr[j][n - 1 - i];
            arr[j][n - 1 - i] = top;
        }
    }
    return true;
}

int main()
{
    // int n;
    // cin>>n;
    vector<vector<int>> arr = {
        {11,20,3,5},
        {2,3,45,60},
        {4,93,2,43},
        {12,3,24,6}};
    cout << endl;
    if (func(arr))
    {
        for (auto i : arr)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Rotation not possible";
    }
    return 0;
}