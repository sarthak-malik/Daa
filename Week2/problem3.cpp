#include <bits/stdc++.h>

using namespace std;

int find_count(vector<int> a, int key)
{
    int n = a.size(), c = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (abs(a[i] - a[j]) == key)
                ++c;
        }
    }
    return c;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int z = 0; z < n; ++z)
    {
        int l;
        cin >> l;
        vector<int> a;
        for (int i = 0; i < l; ++i)
        {
            int y;
            cin >> y;
            a.push_back(y);
        }
        int key;
        cin >> key;
        cout << find_count(a, key) << endl;
    }
    return 0;
}
