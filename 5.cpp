#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int temp;

        static int sum = 0;
        vector<int> arr;
        while (x > 0)
        {

            temp = x % 10;
            arr.push_back(temp);
            x = x / 10;
        }
        sum = sum + arr[0] * pow(10, (arr.size()));

        return sum;
    }
};
int main()
{
    Solution s;
    int x;
    cin >> x;
    int y = s.reverse(x);
    cout << y;
}