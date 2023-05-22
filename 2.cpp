#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast();
int h = 1;

void solve()
{
    int n;
    cin >> n;
    if(n%2 ==0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
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
