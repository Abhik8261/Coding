#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n, k, d;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> av(n, 1);
        int tp = 0;
        for (int j = 1; j <= d; d++)
        {
            vector<pair<int, int>> b;
            for (int i = 0; i < n; i++)
            {
                if (av[i] <= d)
                    b.push_back({v[i], i});
            }
            int maxp = b.size() - k;
            if (maxp <= 0)
                continue;

            sort(b.begin(), b.end());
            for (int i = 0; i < maxp; i++)
            {
                int a = b[i].second;
                av[a] = j + v[a];
                tp++;
            }
        }

        cout << tp << endl;

    } // your code goes here
    return 0;
}
