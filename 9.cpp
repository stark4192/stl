#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
string findSubstring(string s, int k)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<int, char> p;
    string str;
    int count = 0;
    int m;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < k; j++)
        {
            if (find(vowels.begin(), vowels.end(), s[j]) != vowels.end())
            {
                count++;
            }
            p[i].push_back(s[j]);
            str[i] = count;
            count = 0;
        }
    }
    int i = 0;
    int a = *max_element(str.begin(), str.end());
    while (i < str.size())
    {
        if (str[i] == a)
            break;
        i++;
    }
    m = i;
    vector<string> t;
    t.push_back(p[m]);
    return t;
}
int main()
{
    string s, x;
    getline(cin, s);
    int k;
    cin >> k;
    x = findSubstring(s, k);
    cout << x;
}