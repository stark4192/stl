#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast();
int h = 1;

void solve()
{
    string str1, str2;
    cin >> str1;
    int last_digit = str1[str1.length() - 1] - '0';
    cout << last_digit << endl;
    char ch = 'X';
    char temp = ch - 'A' + 'a';
    cout << temp;
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
