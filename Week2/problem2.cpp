#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> a, int b, int e, int k)
{
    while (b <= e)
    {
        int mid = (b + e) / 2;
        if (a[mid] == k)
            return mid;
        else if (a[mid] > k)
            e = mid - 1;
        else
            b = mid + 1;
    }
    return -1;
}

void find_sequence(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int ind = binary_search(a, j + 1, a.size() - 1, a[i] + a[j]);
            if (ind >= 0)
            {
                cout << i + 1 << "," << j + 1 << "," << ind + 1 << endl;
                return;
            }
        }
    }
    cout << "No sequence found" << endl;
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
        find_sequence(a);
    }
    return 0;
}
