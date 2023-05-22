#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string str1 = "hello";
    string str2 = "world";
    string result = str1 + str2;
    cout << result << endl;
    if (str1 == str2)
        cout << "equal"
             << " " << endl;
    else
        cout << "not equal"
             << " " << endl;
    string str;
    cout << str1[0] << endl;
    str[0] = 'a';
    cout << str1.size() << endl;

    string p, q,a,b;
    cin >> p >> q;
    cout << p << " " << q << endl; 
    string r = p + " " + q;
    cout << r;
    getline(std::cin, a);
    getline(std::cin, b);
    cout << a;
    return 0;
}