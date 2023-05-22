#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast();
int h = 1;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0, j = 0;
    while (i < str1.length() && j < str2.length())
    {
            if (str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else
                j++;
    }
    if (i == str1.length())
        cout << str2.length() - str1.length() << endl;
    else
        cout << "IMPOSSIBLE ERROR: " << endl;
}

main()
{
    fast();
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}

void fast()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
